# Sentiment-Analysis-Logistic-Regression-Deployment
This project demonstrates the complete development lifecycle of a Machine Learning model for sentiment analysis. Using the IMDb dataset (50,000 reviews), we trained a classifier capable of distinguishing between positive and negative reviews, then optimized it for deployment on an Arduino microcontroller.

# Project Structure
- `Sentiment_Analysis_IMDb.ipynb`: The main Python notebook containing the training pipeline.

- `LogisticRegressor.h`: The optimized model header file ready for Arduino integration.

- `.gitignore`: Configuration to prevent large data files from being uploaded.

- LICENSE: MIT License.

# Installation & Data Setup
The dataset is not included in this repository due to its size. To run the notebook, follow these steps:

- Download the Dataset: Get the "Large Movie Review Dataset" from Stanford AI Lab.

- Local Placement: Extract the folder so that the `aclImdb/` directory is in the same folder as the notebook.

- Dependencies: Install required libraries:
`pip install pandas numpy scikit-learn nltk codecarbon shap.`

# Key Features
- Model: Logistic Regression with `TfidfVectorizer`.

- Hyperparameter Tuning: Optimized using `GridSearchCV`.

- Sustainability: Monitored carbon footprint using `CodeCarbon` during training.

- Explainability: Used `SHAP` values to visualize which words impact sentiment the most.

- Deployment: Model quantized and exported to a C++ header for Arduino.

# License & Acknowledgments
- Code: MIT License.

- Dataset: **Maas, Andrew L., et al. (2011).** *Learning Word Vectors for Sentiment Analysis.* Proceedings of the 49th Annual Meeting of the Association for Computational Linguistics: Human Language Technologies.
