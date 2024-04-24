#pragma once

struct UCvar{
	struct temperature {
		const float temp32 = 32.0f, 
			  div59 = 5.0f / 9.0f, 
			  kelv = 273.15f, 
			  div95 = 9.0f / 5.0f;
	};
	struct length {
		const float ten = 10.0f,
			  oneH = 100.0f,
			  oneK = 1000.0f,
			  oneHk = 100000.0f,
			  oneE6 = 1e+6f,
			  InK = 39370.1f,
			  InMl = 63360.0f,

			  MltrMl = 1609344.0f,
			  CmMl = 160934.4f,
		      MnMr = 1609.344f,
			  MnK = 1.609344f,

			  InMr = 0.0254f,
			  CmIn = 2.54f,
			  InMlmtre = 25.4f;
	};
	struct frequency {
		const float freq1 = 1000.0f,
			  freq2 = 1e+6f;
	    const double freq3 = 1e+9;
	};
	struct speed {
		const float spd1 = 0.44704f,
			  spd2 = 1.609344f,
			  spd3 = 2.236936f,
			  spd4 = 3.6f;
	};
	struct time {
		const short second1 = 60,
			second2 = 3600,
			mint1 = 1440,
			mint2 = 10080,
			HtD = 24,
			HtW = 168,
			DtW = 7;

		const int	second3 = 86400,
			second4 = 604800;
	};
	struct digitalStorage {
		const short eight1 = 8,
			eight2 = 8000,
			one1 = 1000;

		const float eight3 = 8e+6f,
			eight4 = 8e+9f,
			eight5 = 8e+12f,
			one2 = 1e+6f,
			one3 = 1e+9f,
			one4 = 1e+12f;
	};
};