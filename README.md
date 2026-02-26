# Sentiment-Analysis-Logistic-Regression-Deployment
This project demonstrates the complete development lifecycle of a Machine Learning model for sentiment analysis. Using the IMDb dataset (50,000 reviews), we trained a classifier capable of distinguishing between positive and negative reviews, then optimized it for deployment on an Arduino microcontroller.

# Project Overview
- **Carbon Footprint**:
    <br> The environmental impact of this project was monitored using the CodeCarbon library to ensure sustainable AI practices.
    <br> **Emissions during hyperparameter tuning**: Approximately $5.21 \times 10^{-6}$ kgCO2e (0.0000052 kgCO2e).
- **Ethical Considerations**:
   <br> To ensure the model is fair and transparent, we used SHAP (SHapley Additive exPlanations) values to interpret how the classifier makes decisions.
   <br> **Transparency**: The SHAP summary plot reveals that words like "worst", "bad", and "awful" strongly drive negative predictions, while "great", "excellent", and "best" drive positive ones.
   <br> **Bias Mitigation**: We analyzed the top features to ensure the model relies on sentiment-bearing adjectives rather than protected attributes or neutral stop words.
   <br> **Fairness**: Providing explainability allows us to verify that the model does not develop unintended biases based on specific movie genres or actor names.
- **Embedded System Insights**:
   <br> The final model was exported into a C++ header file (LogisticRegressor.h) for deployment on hardware with limited resources, such as an Arduino.
   <br> **uantization & Efficiency**: The model coefficients were optimized to minimize memory footprint (RAM and Flash), which is critical for microcontrollers.
   <br> **Edge AI**: Running the model directly on the "Edge" ensures data privacy (no data is sent to the cloud) and provides near-instant response times for real-time sentiment analysis.
  
# Project Structure
- `Sentiment_Analysis_IMDb.ipynb`: The main Python notebook containing the training pipeline.

- `LogisticRegressor.h`: The optimized model header file ready for Arduino integration.

- `.gitignore`: Configuration to prevent large data files from being uploaded.

- **LICENSE**: MIT License.

# Installation & Data Setup
The dataset is not included in this repository due to its size. To run the notebook, follow these steps:

- **Download the Dataset**: Get the "Large Movie Review Dataset" from Stanford AI Lab.

- **Local Placement**: Extract the folder so that the `aclImdb/` directory is in the same folder as the notebook.

- **Dependencies**: Install required libraries:
`pip install pandas numpy scikit-learn nltk codecarbon shap.`

# Key Features
- **Model**: Logistic Regression with `TfidfVectorizer`.

- **Hyperparameter Tuning**: Optimized using `GridSearchCV`.

- **Sustainability**: Monitored carbon footprint using `CodeCarbon` during training.

- **Explainability**: Used `SHAP` values to visualize which words impact sentiment the most.

- **Deployment**: Model quantized and exported to a C++ header for Arduino.

# Code Release & Responsibilities
- **Responsibility**: As the developer, I am responsible for providing clear, documented source code and maintaining the deployment scripts.
- **License Choice (MIT)**: I have chosen the MIT License because it promotes maximum transparency and collaboration, allowing others to reuse the Arduino-ready model while protecting me from liability (no warranty).
- **Comparison of Practices**:
    MIT/Apache: Focus on open collaboration and ease of use in commercial products.
    GPL: Ensures the code remains open-source forever (copyleft), which can sometimes limit private commercial integration.
- **Impact**: These practices ensure that the software remains maintainable and that the community can verify the ethical explainability (SHAP results) of the model.

# Maintenance & Contributions (Bug Reporting)
To ensure the longevity of this project, I follow this protocol:
- **Issue Tracking**: Users can report bugs or suggest improvements via the "Issues" tab on GitHub.
- **Pull Requests**: I encourage contributions. To fix a bug, please fork the repo, create a feature branch, and submit a Pull Request for review.
- **Fixing Protocol**: Reported issues are prioritized based on whether they impact the model's accuracy or the Arduino deployment's stability.

# License & Acknowledgments
- **Code**: MIT License.

- **Dataset**: **Maas, Andrew L., et al. (2011).** *Learning Word Vectors for Sentiment Analysis.* Proceedings of the 49th Annual Meeting of the Association for Computational Linguistics: Human Language Technologies.
