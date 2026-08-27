import pandas as pd

def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame:
    filtered_df=animals[animals['weight']>100]   #filter rows whose weight is >100
    sorted_df=filtered_df.sort_values(by='weight', ascending=False)  #sorts the filtered rows in descending order
    name_df=sorted_df[['name']] #[[]] - stores dataframe, [] - stores series
    return name_df