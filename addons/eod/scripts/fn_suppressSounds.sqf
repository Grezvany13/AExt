/**

AGM needs to be translated to ACE; probably with ACE Hearing Framework

if (EODS_SoundRegulation_normalVolumeSound > EODS_SoundRegulation_minVolumeSound) then {
    missionNameSpace setVariable ["AGM_Hearing_disableVolumeUpdate", true];
    EODS_SoundRegulation_suppressDuration fadeSound EODS_SoundRegulation_minVolumeSound;
};

if (EODS_SoundRegulation_normalVolumeMusic > EODS_SoundRegulation_minVolumeMusic) then {
    missionNameSpace setVariable ["AGM_Hearing_disableVolumeUpdate", true];
    EODS_SoundRegulation_suppressDuration fadeMusic EODS_SoundRegulation_minVolumeMusic;
};
**/

player setVariable ["SoundSystemActive", true];
