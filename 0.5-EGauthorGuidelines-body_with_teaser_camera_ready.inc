% ---------------------------------------------------------------------
% EG author guidelines plus sample file for EG publication using LaTeX2e input
% D.Fellner, v2.04, Dec 14, 2023


\title[]%
      {The Misclassification Likelihood Matrix: \\ Some Classes Are More Likely To Be Misclassified Than Others}

% for anonymous conference submission please enter your SUBMISSION ID
% instead of the author's name (and leave the affiliation blank) !!
% for final version: please provide your *own* ORCID in the brackets following \orcid; see https://orcid.org/ for more details.
% \author[D. Fellner \& S. Behnke]
% {\parbox{\textwidth}{\centering D.\,W. Fellner\thanks{Chairman Eurographics Publications Board}$^{1,2}$\orcid{0000-0001-7756-0901}
%         and S. Behnke$^{2}$\orcid{0000-0001-5923-423X} 
% %        S. Spencer$^2$\thanks{Chairman Siggraph Publications Board}
%         }
%\author[D. Sikar \& A. Garcez]
\author[D. Sikar, A. d'Avila Garcez, R. Bloomfield, T. Weyde, K. Peeroo, N. Singh, M. Hutchinson, D. Laksono,  M. Reljan-Delaney]
{\parbox{\textwidth}{\centering D. Sikar, A. d'Avila Garcez\orcid{0000-0001-7375-9518}, R. Bloomfield, T. Weyde\orcid{0000-0001-8028-9905}, K. Peeroo, N. Singh, M. Hutchinson, D. Laksono,  M. Reljan-Delaney
% ORCID
% Artur: https://orcid.org/0000-0001-7375-9518
% Tillman: https://orcid.org/0000-0001-8028-9905
%        S. Spencer$^2$\thanks{Chairman Siggraph Publications Board}
        }
        \\
% For Computer Graphics Forum: Please use the abbreviation of your first name.
{\parbox{\textwidth}{\centering Department of Computer Science, City St George's, University of London
%        $^2$ Another Department to illustrate the use in papers from authors
%             with different affiliations
       }
}
% {\parbox{\textwidth}{\centering $^1$TU Darmstadt \& Fraunhofer IGD, Germany\\
%          $^2$Graz University of Technology, Institute of Computer Graphics and Knowledge Visualization, Austria
% %        $^2$ Another Department to illustrate the use in papers from authors
% %             with different affiliations
%        }
% }
}
% ------------------------------------------------------------------------

% if the Editors-in-Chief have given you the data, you may uncomment
% the following five lines and insert it here
%
% \volume{36}   % the volume in which the issue will be published;
% \issue{1}     % the issue number of the publication
% \pStartPage{1}      % set starting page


%-------------------------------------------------------------------------
\begin{document}

% removing teaser as it is taking up too much space best used for text
% \teaser{
%  %\includegraphics[width=0.9\linewidth]{eg_new}
%  \includegraphics[width=0.9\linewidth]{Figures/Pixelation_Digit_5_images_histogramsx10_plus_softmax.png}
%  \centering
%   \caption{Top row: MNIST digit 5 subject to 10 increasing levels of pixelation \\ Bottom row: Average softmax for all MNIST digit 5 classes across 12 perturbation types, subject to 10 increasing perturbation levels}
% \label{fig:teaser}
% }

\maketitle
%-------------------------------------------------------------------------
% ABSTRACT 
\input{Sections/01-Abstract}    
%-------------------------------------------------------------------------
% % INTRODUCTION 
\input{Sections/02-Introduction}    
% %-------------------------------------------------------------------------
% % CONTEXT 
\input{Sections/03-Context}    
% %-------------------------------------------------------------------------
% % METHODS 
\input{Sections/04-Methods}    
% %-------------------------------------------------------------------------
% % RESULTS AND DISCUSSION 
\input{Sections/05-ResultsAndDiscussion}    
% %-------------------------------------------------------------------------
% % CONCLUSION AND FUTURE WORK 
\input{Sections/06-ConclusionAndFutureWork}    
% %-------------------------------------------------------------------------
% bibtex
%\bibliographystyle{eg-alpha-doi} 
%\bibliography{references}       

% biblatex with biber
\printbibliography                

%-------------------------------------------------------------------------
\end{document}
