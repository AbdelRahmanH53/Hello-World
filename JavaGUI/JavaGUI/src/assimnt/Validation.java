
package assimnt;

public class Validation {
            
       
    
    
            public String validationFields(String fName , String lName ,String email,String password, String confpass,String country,String gender,String secret,String answer)
            {
            
            if(fName.isEmpty() || lName.isEmpty() || email.isEmpty() || password.isEmpty() || confpass.isEmpty() ||answer.isEmpty())
                return "\t\tNot Filled";
                
            
            
            /*else if (!country.contains("Egypt")||!country.contains("Sudan")||!country.contains("Germany")||!country.contains("China")||!country.contains("Japan"))
                return"Pick a country";
          

            else if (!secret.contains("Egypt    In what city were you born?")||
                    !secret.contains("What is the name of your favorite pet?")||
                    !secret.contains("What is your mother's maiden name?")||
                    !secret.contains("What high school did you attend?")||
                    !secret.contains("What is the name of your first school?")||
                    !secret.contains("What was the make of your first car?")||
                    !secret.contains("What was your favorite food as a child?"))
                return"Pick a secret question";
            
            else if(!gender.contains("Male")||!gender.contains("Female"))
                return"Pick a gender";
            */
            
            else if (fName.length()<3 || lName.length()<3)
                return "Frist and last need to be bigger than 3 letters";
            
            else if (!email.contains("@")||!email.contains(".com"))
            return "Wronge email format";
            
            
            else if ( password.length()< 6)
                return " password is weak ";
            
            
            else if (!password.equals(confpass) )
                return "passwords dont match";
            
            else
                return "1";
            
            
            
            
        }
    
}
