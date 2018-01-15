% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/hd.R
\name{hd}
\alias{hd}
\title{Historical decomposition for SVAR Models}
\usage{
hd(x, series = 1)
}
\arguments{
\item{x}{SVAR object of class "svars"}

\item{series}{Integer, indicating the series that should be decomposed.}
}
\description{
Calculation of historical decomposition for an identified SVAR object 'svars' derived by function id.cvm( ),id.cv( ),id.dc( ) or id.ngml( ).
}
\examples{
\donttest{
v1 <- VAR(USA, lag.max = 10, ic = "AIC" )
x1 <- id.dc(v1)
x2 <- hd(x1, series = 2)
plot(x2)
}

}
\seealso{
\code{\link{id.cvm}}, \code{\link{id.dc}}, \code{\link{id.ngml}} or \code{\link{id.cv}}
}