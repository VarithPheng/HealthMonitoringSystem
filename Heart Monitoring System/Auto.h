#ifndef AUTO_H
#define AUTO_H

#include <string>

class Auto {
	private:
		std::string generatedName;
		std::string generatedGender;
		std::string generatedAgeGroup;
		std::string generatedExactAge;

		int generatedHeartRate;
		int generatedBloodPressure1;
		int generatedBloodPressure2;
		double generatedTemperature;

	public:
		Auto();
		void autoGenerated();

		std::string getName() const {
			return generatedName;
		}

		std::string getGender() const {
			return generatedGender;
		}

		std::string getAgeGroup() const {
			return generatedAgeGroup;
		}

		std::string getExactAge() const {
			return generatedExactAge;
		}

		int getHeartRate() const {
			return generatedHeartRate;
		}

		int getBloodPressure1() const {
			return generatedBloodPressure1;
		}

		int getBloodPressure2() const {
			return generatedBloodPressure2;
		}

		double getTemperature() const {
			return generatedTemperature;
		}
};

#endif