#' Computes the posterior distribution of survival probabilities for a vector x for the Piecewise Exponential Hazard model (PEH)
#' @param x Vector of times to compute the posterior mean survival probability.
#' @param G1 List of posterior samples from the BayesPiecewiseLinearHazard function.
#' @return Matrix containing the posterior distribution of survival probabilities S(x)
#'@export
GetALLSurvPEH = function(x,G1){
  GetSurvPEH = function(x,s,lam,J){
    
    y=x
    
    
    
    for(m in 1:length(x)){
      for(k in 1:(J+1)){
        if((x[m]>s[k]) && (x[m]<=s[k+1])){
          if(k>1){
            y[m]=exp(-exp(lam[k])*(y[m]-s[k]) - sum(exp(lam[1:(k-1)])*(s[2:k]-s[1:(k-1)])))
            
          }else{
            ##First interval
            y[m]=exp(-exp(lam[k])*(y[m]-s[k]))
          }
          
        }
      }
      
    }
    
    return(y)
  }
  
  SurvHold=matrix(nrow=nrow(G1[[1]]),ncol=length(x))
  
  for(b in 1:nrow(G1[[1]])){
    s=G1[[1]][b,]
    lam=(G1[[2]])[b,]
    J = G1[[3]][b]
    
    
    SurvHold[b,]= GetSurvPEH(x ,  s,  lam,  J)
    
  }
  
  return(SurvHold)  
}

