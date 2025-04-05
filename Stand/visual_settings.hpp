#pragma once

#include <map>

namespace Stand
{
	inline std::map<std::string, float> visual_settings = {
{"Adaptation.max.step.size", 3.0f},
{"Adaptation.min.step.size", 0.15f},
{"Adaptation.step.size.mult", 1.5f},
{"Adaptation.sun.exposure.tweak", -2.f},
{"Adaptation.threshold", 0.0f},
{"adaptivedof.exposureMax", 2.5f},
{"adaptivedof.exposureMin", -2.5f},
{"adaptivedof.gridsize", 15.0f},
{"adaptivedof.missedrayvalue", 10000.0f},
{"adaptivedof.smoothtime", 0.75f},
{"bloom.blurblendmult.large", 0.5f},
{"bloom.blurblendmult.med", 2.0f},
{"bloom.blurblendmult.small", 1.0f},
{"bloom.threshold.expsoure.diff.max", 0.0f},
{"bloom.threshold.expsoure.diff.min", 0.0f},
{"bloom.threshold.min", 0.4f},
{"bloom.threshold.power", 1.0f},
{"boat.color.blue", 0.7f},
{"boat.color.green", 1.f},
{"boat.color.red", 1.f},
{"boat.corona.fadelength", 20.0f},
{"boat.corona.intensity", 1.0f},
{"boat.corona.size", 4.0f},
{"boat.corona.zBias", 0.02f},
{"boat.intensity", 10.0f},
{"boat.light.fadelength", 10.0f},
{"boat.light.interiorshutdowndistance", 100.0f},
{"boat.light.shutdowndistance", 60.0f},
{"boat.radius", 0.7f},
{"boatsearchlight.color.blue", 0.03f},
{"boatsearchlight.color.green", 0.03f},
{"boatsearchlight.color.red", 0.03f},
{"boatsearchlight.length", 100.0f},
{"boatsearchlight.mainLightInfo.coronaIntensity", 6.0f},
{"boatsearchlight.mainLightInfo.coronaIntensityFar", 12.0f},
{"boatsearchlight.mainLightInfo.coronaOffset", 0.235f},
{"boatsearchlight.mainLightInfo.coronaSize", 1.5f},
{"boatsearchlight.mainLightInfo.coronaSizeFar", 20.0f},
{"boatsearchlight.mainLightInfo.coronaZBias", 0.3f},
{"boatsearchlight.mainLightInfo.enable", 1.0f},
{"boatsearchlight.mainLightInfo.falloffExp", 8.0f},
{"boatsearchlight.mainLightInfo.falloffScale", 2.0f},
{"boatsearchlight.mainLightInfo.globalIntensity", 4.0f},
{"boatsearchlight.mainLightInfo.innerAngle", 0.0f},
{"boatsearchlight.mainLightInfo.lightFadeDist", 40.0f},
{"boatsearchlight.mainLightInfo.lightIntensityScale", 10.0f},
{"boatsearchlight.mainLightInfo.outerAngle", 5.0f},
{"boatsearchlight.mainLightInfo.outerVolumeFallOffExponent", 50.0f},
{"boatsearchlight.mainLightInfo.outerVolumeIntensity", 0.0f},
{"boatsearchlight.mainLightInfo.shadow", 1.0f},
{"boatsearchlight.mainLightInfo.specular", 1.0f},
{"boatsearchlight.mainLightInfo.volume", 1.0f},
{"boatsearchlight.mainLightInfo.volumeIntensityScale", 0.125f},
{"boatsearchlight.mainLightInfo.volumeSizeScale", 0.5f},
{"boatsearchlight.offset", -0.11f},
{"bokeh.alphaCutoff", 0.15f},
{"bokeh.brightnessExposureMax", 1.0f},
{"bokeh.brightnessExposureMin", -3.f},
{"bokeh.cocThreshold", 0.1f},
{"bokeh.globalAlpha", 1.0f},
{"bokeh.shapeExposureRangeMax", 1.0f},
{"bokeh.shapeExposureRangeMin", -3.f},
{"bokeh.sizeMultiplier", 1.3f},
{"cam.game.blur.cap", 1.0f},
{"car.brakelight.day.emissive.off", 0.3f},
{"car.brakelight.day.emissive.on", 45.0f},
{"car.brakelight.night.emissive.off", 0.003f},
{"car.brakelight.night.emissive.on", 30.0f},
{"car.coronas.BeginEnd", 300.0f},
{"car.coronas.BeginStart", 50.0f},
{"car.coronas.CutoffEnd", 300.0f},
{"car.coronas.CutoffStart", 290.0f},
{"car.coronas.MainFadeRatio", 0.25f},
{"car.coronas.underwaterFade", 0.4f},
{"car.dashlight.capsuleLength", 0.0f},
{"car.dashlight.color.blue", 0.6f},
{"car.dashlight.color.green", 0.85f},
{"car.dashlight.color.red", 1.f},
{"car.dashlight.coronaHDR", 1.0f},
{"car.dashlight.coronaSize", 1.0f},
{"car.dashlight.falloffExp", 4.0f},
{"car.dashlight.innerConeAngle", 0.0f},
{"car.dashlight.intensity", 0.2f},
{"car.dashlight.outerConeAngle", 90.0f},
{"car.dashlight.radius", 1.5f},
{"car.dashlight.shadowBlur", 0.0f},
{"car.dashlight.useDynamicShadows", 0.0f},
{"car.dashlight.useSun", 0.0f},
{"car.defaultlight.day.emissive.off", 0.05f},
{"car.defaultlight.day.emissive.on", 15.0f},
{"car.defaultlight.night.emissive.off", 0.003f},
{"car.defaultlight.night.emissive.on", 6.0f},
{"car.doorlight.capsuleLength", 0.0f},
{"car.doorlight.color.blue", 0.95f},
{"car.doorlight.color.green", 0.85f},
{"car.doorlight.color.red", 1.f},
{"car.doorlight.coronaHDR", 1.0f},
{"car.doorlight.coronaSize", 1.0f},
{"car.doorlight.falloffExp", 4.0f},
{"car.doorlight.innerConeAngle", 0.0f},
{"car.doorlight.intensity", 0.05f},
{"car.doorlight.outerConeAngle", 90.0f},
{"car.doorlight.radius", 1.1f},
{"car.doorlight.shadowBlur", 0.0f},
{"car.doorlight.useDynamicShadows", 0.0f},
{"car.doorlight.useSun", 0.0f},
{"car.emissiveMultiplier", 2.0f},
{"car.extralight.day.emissive.off", 0.001f},
{"car.extralight.day.emissive.on", 9.0f},
{"car.extralight.night.emissive.off", 0.05f},
{"car.extralight.night.emissive.on", 9.0f},
{"car.fatinteriorlight.capsuleLength", 0.0f},
{"car.fatinteriorlight.color.blue", 0.7f},
{"car.fatinteriorlight.color.green", 1.f},
{"car.fatinteriorlight.color.red", 1.f},
{"car.fatinteriorlight.coronaHDR", 1.0f},
{"car.fatinteriorlight.coronaSize", 1.0f},
{"car.fatinteriorlight.falloffExp", 8.0f},
{"car.fatinteriorlight.innerConeAngle", 0.0f},
{"car.fatinteriorlight.intensity", 1.5f},
{"car.fatinteriorlight.outerConeAngle", 90.0f},
{"car.fatinteriorlight.radius", 3.1f},
{"car.fatinteriorlight.shadowBlur", 0.0f},
{"car.fatinteriorlight.useDynamicShadows", 0.0f},
{"car.fatinteriorlight.useSun", 0.0f},
{"car.headlight.day.emissive.off", 0.05f},
{"car.headlight.day.emissive.on", 25.0f},
{"car.headlight.night.emissive.off", 0.001f},
{"car.headlight.night.emissive.on", 15.0f},
{"car.headlights.aim.dipeedbeam.angle", 0.0f},
{"car.headlights.aim.dippedbeam.mod", -0.2f},
{"car.headlights.aim.fullbeam.angle", 0.0f},
{"car.headlights.aim.fullbeam.mod", 0.0f},
{"car.headlights.angle", -0.7f},
{"car.headlights.fullbeam.CoronaIntensityMult", 2.0f},
{"car.headlights.fullbeam.CoronaSizeMult", 2.0f},
{"car.headlights.fullbeam.DistMult", 1.3f},
{"car.headlights.fullbeam.IntensityMult", 1.1f},
{"car.headlights.global.ConeInnerAngleMod", 1.0f},
{"car.headlights.global.ConeOuterAngleMod", 1.0f},
{"car.headlights.global.Fake2LightsAngleMod", 0.95f},
{"car.headlights.global.Fake2LightsDisplacementMod", 0.17f},
{"car.headlights.global.HeadlightDistMult", 1.0f},
{"car.headlights.global.HeadlightIntensityMult", 5.0f},
{"car.headlights.global.OnlyOneLightMod", 1.0f},
{"car.headlights.player.distmult", 1.5f},
{"car.headlights.player.exponentmult", 3.0f},
{"car.headlights.player.intensitymult", 1.2f},
{"car.headlights.split", 0.0f},
{"car.headlights.submarine.Fake2LightsAngleMod", 0.83f},
{"car.headlights.submarine.Fake2LightsDisplacementMod", 0.0f},
{"car.headlights.volume.intensityscale", 0.005f},
{"car.headlights.volume.outerexponent", 50.0f},
{"car.headlights.volume.outerintensity", 0.0f},
{"car.headlights.volume.outerVolumeColor.blue", 0.f},
{"car.headlights.volume.outerVolumeColor.green", 0.f},
{"car.headlights.volume.outerVolumeColor.red", 0.f},
{"car.headlights.volume.sizescale", 1.0f},
{"car.indicator.day.emissive.off", 0.3f},
{"car.indicator.day.emissive.on", 10.0f},
{"car.indicator.night.emissive.off", 0.003f},
{"car.indicator.night.emissive.on", 10.0f},
{"car.interiorlight.capsuleLength", 0.0f},
{"car.interiorlight.color.blue", 0.7f},
{"car.interiorlight.color.green", 1.f},
{"car.interiorlight.color.red", 1.f},
{"car.interiorlight.coronaHDR", 1.0f},
{"car.interiorlight.coronaSize", 1.0f},
{"car.interiorlight.falloffExp", 8.0f},
{"car.interiorlight.innerConeAngle", 0.0f},
{"car.interiorlight.intensity", 1.5f},
{"car.interiorlight.outerConeAngle", 90.0f},
{"car.interiorlight.radius", 2.1f},
{"car.interiorlight.shadowBlur", 0.0f},
{"car.interiorlight.useDynamicShadows", 0.0f},
{"car.interiorlight.useSun", 0.0f},
{"car.middlebrakelight.day.emissive.off", 0.3f},
{"car.middlebrakelight.day.emissive.on", 45.0f},
{"car.middlebrakelight.night.emissive.off", 0.003f},
{"car.middlebrakelight.night.emissive.on", 30.0f},
{"car.neon.bikeclipplaneheight", 0.25f},
{"car.neon.capsuleExtent.frontback", 0.6f},
{"car.neon.capsuleExtent.sides", 1.2f},
{"car.neon.clipplaneheight", -0.014f},
{"car.neon.defaultcolor.blue", 1.f},
{"car.neon.defaultcolor.green", 0.f},
{"car.neon.defaultcolor.red", 1.f},
{"car.neon.falloffexponent", 128.0f},
{"car.neon.intensity", 16.0f},
{"car.neon.radius", 1.5f},
{"car.platelight.capsuleLength", 0.0f},
{"car.platelight.color.blue", 1.f},
{"car.platelight.color.green", 1.f},
{"car.platelight.color.red", 1.f},
{"car.platelight.coronaHDR", 1.0f},
{"car.platelight.coronaSize", 1.0f},
{"car.platelight.falloffExp", 64.0f},
{"car.platelight.innerConeAngle", 0.0f},
{"car.platelight.intensity", 0.5f},
{"car.platelight.outerConeAngle", 90.0f},
{"car.platelight.radius", 0.9f},
{"car.platelight.shadowBlur", 0.0f},
{"car.platelight.useDynamicShadows", 0.0f},
{"car.platelight.useSun", 0.0f},
{"car.redinteriorlight.capsuleLength", 0.0f},
{"car.redinteriorlight.color.blue", 0.f},
{"car.redinteriorlight.color.green", 0.f},
{"car.redinteriorlight.color.red", 1.f},
{"car.redinteriorlight.coronaHDR", 1.0f},
{"car.redinteriorlight.coronaSize", 1.0f},
{"car.redinteriorlight.falloffExp", 8.0f},
{"car.redinteriorlight.innerConeAngle", 0.0f},
{"car.redinteriorlight.intensity", 1.5f},
{"car.redinteriorlight.outerConeAngle", 90.0f},
{"car.redinteriorlight.radius", 2.1f},
{"car.redinteriorlight.shadowBlur", 0.0f},
{"car.redinteriorlight.useDynamicShadows", 0.0f},
{"car.redinteriorlight.useSun", 0.0f},
{"car.reversinglight.day.emissive.off", 0.1f},
{"car.reversinglight.day.emissive.on", 20.0f},
{"car.reversinglight.night.emissive.off", 0.003f},
{"car.reversinglight.night.emissive.on", 3.0f},
{"car.sirenlight.day.emissive.off", 0.05f},
{"car.sirenlight.day.emissive.on", 150.0f},
{"car.sirenlight.night.emissive.off", 0.04f},
{"car.sirenlight.night.emissive.on", 150.0f},
{"car.sirens.ShadowFade", 15.0f},
{"car.sirens.SpecularFade", 15.0f},
{"car.taillight.day.emissive.off", 0.3f},
{"car.taillight.day.emissive.on", 25.0f},
{"car.taillight.night.emissive.off", 0.003f},
{"car.taillight.night.emissive.on", 25.0f},
{"car.taxi.capsuleLength", 0.0f},
{"car.taxi.color.blue", 0.6f},
{"car.taxi.color.green", 1.f},
{"car.taxi.color.red", 1.f},
{"car.taxi.coronaHDR", 1.0f},
{"car.taxi.coronaSize", 1.0f},
{"car.taxi.falloffExp", 8.0f},
{"car.taxi.innerConeAngle", 0.5f},
{"car.taxi.intensity", 1.5f},
{"car.taxi.outerConeAngle", 1.0f},
{"car.taxi.radius", 0.8f},
{"car.taxi.shadowBlur", 0.0f},
{"car.taxi.useDynamicShadows", 0.0f},
{"car.taxi.useSun", 0.0f},
{"cloud.speed.edge", 1.0f},
{"cloud.speed.hats", 1.0f},
{"cloud.speed.large", 5.0f},
{"cloud.speed.overall", 1.0f},
{"cloud.speed.small", 1.0f},
{"cloudgen.edge.detail.scale", 16.0f},
{"cloudgen.frequency", 2.0f},
{"cloudgen.overlay.detail.scale", 8.0f},
{"cloudgen.scale", 48.0f},
{"dark.light.capsuleLength", 0.0f},
{"dark.light.color.blue", 0.6f},
{"dark.light.color.green", 1.f},
{"dark.light.color.red", 0.6f},
{"dark.light.coronaHDR", 1.0f},
{"dark.light.coronaSize", 1.0f},
{"dark.light.falloffExp", 128.0f},
{"dark.light.innerConeAngle", 0.0f},
{"dark.light.intensity", 0.1f},
{"dark.light.outerConeAngle", 40.0f},
{"dark.light.radius", 50.0f},
{"dark.light.shadowBlur", 0.0f},
{"dark.light.useDynamicShadows", 0.0f},
{"dark.light.useSun", 0.0f},
{"dark.lightDirBase", 0.5f},
{"dark.secLight.capsuleLength", 0.0f},
{"dark.secLight.color.blue", 0.6f},
{"dark.secLight.color.green", 1.f},
{"dark.secLight.color.red", 0.6f},
{"dark.secLight.coronaHDR", 1.0f},
{"dark.secLight.coronaSize", 1.0f},
{"dark.secLight.enable", 1.0f},
{"dark.secLight.falloffExp", 32.0f},
{"dark.secLight.innerConeAngle", 0.0f},
{"dark.secLight.intensity", 0.1f},
{"dark.secLight.lightDirBase", 0.5f},
{"dark.secLight.outerConeAngle", 90.0f},
{"dark.secLight.radius", 0.5f},
{"dark.secLight.shadowBlur", 0.0f},
{"dark.secLight.useDynamicShadows", 0.0f},
{"dark.secLight.useSpec", 1.0f},
{"dark.secLight.useSun", 0.0f},
{"dark.shadowBlur", 8.0f},
{"dark.shadowNearClip", 0.2f},
{"dark.useShadows", 1.0f},
{"dark.useSpec", 1.0f},
{"dark.useVolumes", 0.0f},
{"dark.volumeExponent", 0.0f},
{"dark.volumeIntensity", 0.1f},
{"dark.volumeSize", 0.05f},
{"defaultmotionblur.enabled", 1.0f},
{"defaultmotionblur.strength", 0.1f},
{"defaultsearchlight.color.blue", 0.03f},
{"defaultsearchlight.color.green", 0.03f},
{"defaultsearchlight.color.red", 0.03f},
{"defaultsearchlight.length", 100.0f},
{"defaultsearchlight.mainLightInfo.coronaIntensity", 6.0f},
{"defaultsearchlight.mainLightInfo.coronaIntensityFar", 12.0f},
{"defaultsearchlight.mainLightInfo.coronaOffset", 0.4f},
{"defaultsearchlight.mainLightInfo.coronaSize", 3.5f},
{"defaultsearchlight.mainLightInfo.coronaSizeFar", 35.0f},
{"defaultsearchlight.mainLightInfo.coronaZBias", 0.3f},
{"defaultsearchlight.mainLightInfo.enable", 1.0f},
{"defaultsearchlight.mainLightInfo.falloffExp", 8.0f},
{"defaultsearchlight.mainLightInfo.falloffScale", 2.0f},
{"defaultsearchlight.mainLightInfo.globalIntensity", 4.0f},
{"defaultsearchlight.mainLightInfo.innerAngle", 0.0f},
{"defaultsearchlight.mainLightInfo.lightFadeDist", 40.0f},
{"defaultsearchlight.mainLightInfo.lightIntensityScale", 10.0f},
{"defaultsearchlight.mainLightInfo.outerAngle", 5.0f},
{"defaultsearchlight.mainLightInfo.outerVolumeFallOffExponent", 50.0f},
{"defaultsearchlight.mainLightInfo.outerVolumeIntensity", 0.0f},
{"defaultsearchlight.mainLightInfo.shadow", 1.0f},
{"defaultsearchlight.mainLightInfo.specular", 1.0f},
{"defaultsearchlight.mainLightInfo.volume", 1.0f},
{"defaultsearchlight.mainLightInfo.volumeIntensityScale", 0.125f},
{"defaultsearchlight.mainLightInfo.volumeSizeScale", 0.5f},
{"defaultsearchlight.offset", -0.13f},
{"distantlights.carlight.farFade", 450.0f},
{"distantlights.carlight.HDRIntensity", 2.0f},
{"distantlights.carlight1.color.blue", 0.91f},
{"distantlights.carlight1.color.green", 0.95f},
{"distantlights.carlight1.color.red", 1.f},
{"distantlights.carlight1.spacing.mp", 3.5f},
{"distantlights.carlight1.spacing.sp", 2.0f},
{"distantlights.carlight1.speed.mp", 35.0f},
{"distantlights.carlight1.speed.sp", 40.0f},
{"distantlights.carlight2.color.blue", 0.f},
{"distantlights.carlight2.color.green", 0.01f},
{"distantlights.carlight2.color.red", 1.f},
{"distantlights.carlight2.spacing.mp", 3.0f},
{"distantlights.carlight2.spacing.sp", 3.0f},
{"distantlights.carlight2.speed.mp", 20.0f},
{"distantlights.carlight2.speed.sp", 20.0f},
{"distantlights.carlightZOffset", 2.0f},
{"distantlights.flicker", 0.0f},
{"distantlights.hourEnd", 6.0f},
{"distantlights.hourStart", 20.0f},
{"distantlights.inlandHeight", 0.0f},
{"distantlights.randomizeSpacing.mp", 0.5f},
{"distantlights.randomizeSpacing.sp", 0.25f},
{"distantlights.randomizeSpeed.mp", 0.5f},
{"distantlights.randomizeSpeed.sp", 0.5f},
{"distantlights.size", 0.8f},
{"distantlights.sizeDist", 0.0001f},
{"distantlights.sizeDistStart", 0.0001f},
{"distantlights.sizeMin", 8.0f},
{"distantlights.sizeReflections", 0.8f},
{"distantlights.sizeUpscale", 1.5f},
{"distantlights.sizeUpscaleReflections", 1.5f},
{"distantlights.speed0", 0.2f},
{"distantlights.speed1", 0.35f},
{"distantlights.speed2", 0.4f},
{"distantlights.speed3", 0.6f},
{"distantlights.streetlight.color.blue", 0.03f},
{"distantlights.streetlight.color.green", 0.47f},
{"distantlights.streetlight.color.red", 1.f},
{"distantlights.streetlight.HDRIntensity", 2.0f},
{"distantlights.streetlight.Spacing", 25.0f},
{"distantlights.streetlight.ZOffset", 12.0f},
{"distantlights.streetLightHourEnd", 6.0f},
{"distantlights.streetLightHourStart", 20.0f},
{"distantlights.twinkleAmount", 1.0f},
{"distantlights.twinkleSpeed", 0.05f},
{"dynamic.bake.end.max", 1.3f},
{"dynamic.bake.end.min", 0.3f},
{"dynamic.bake.start.max", 1.7f},
{"dynamic.bake.start.min", 0.7f},
{"emissive.night.end.time", 6.0f},
{"emissive.night.start.time", 20.0f},
{"Exposure.curve.offset", 104.7f},
{"Exposure.curve.power", 0.007f},
{"Exposure.curve.scale", -106.2f},
{"fpv.motionblur.max.velocity", 32.0f},
{"fpv.motionblur.weight0", 1.0f},
{"fpv.motionblur.weight1", 0.0f},
{"fpv.motionblur.weight2", 0.8f},
{"fpv.motionblur.weight3", 1.0f},
{"heli.interiorlight.capsuleLength", 0.0f},
{"heli.interiorlight.color.blue", 0.05f},
{"heli.interiorlight.color.green", 0.2f},
{"heli.interiorlight.color.red", 1.f},
{"heli.interiorlight.coronaHDR", 1.0f},
{"heli.interiorlight.coronaSize", -0.25f},
{"heli.interiorlight.falloffExp", 8.0f},
{"heli.interiorlight.innerConeAngle", 0.0f},
{"heli.interiorlight.intensity", 1.5f},
{"heli.interiorlight.outerConeAngle", 90.0f},
{"heli.interiorlight.radius", 2.1f},
{"heli.interiorlight.shadowBlur", 0.0f},
{"heli.interiorlight.useDynamicShadows", 0.0f},
{"heli.interiorlight.useSun", 0.0f},
{"heli.poslight.farSize", 1.0f},
{"heli.poslight.farStrength", 80.0f},
{"heli.poslight.intensity_typeA", 12.0f},
{"heli.poslight.intensity_typeB", 6.0f},
{"heli.poslight.leftColor.blue", 0.f},
{"heli.poslight.leftColor.green", 0.f},
{"heli.poslight.leftColor.red", 1.f},
{"heli.poslight.nearSize", 0.25f},
{"heli.poslight.nearStrength", 20.0f},
{"heli.poslight.radius", 2.5f},
{"heli.poslight.rightColor.blue", 0.f},
{"heli.poslight.rightColor.green", 1.f},
{"heli.poslight.rightColor.red", 0.f},
{"heli.swift2.cabin.capsuleLength", 0.0f},
{"heli.swift2.cabin.color.blue", 1.f},
{"heli.swift2.cabin.color.green", 1.f},
{"heli.swift2.cabin.color.red", 1.f},
{"heli.swift2.cabin.coronaHDR", 1.0f},
{"heli.swift2.cabin.coronaSize", 1.0f},
{"heli.swift2.cabin.falloffExp", 16.0f},
{"heli.swift2.cabin.innerConeAngle", 20.0f},
{"heli.swift2.cabin.intensity", 5.0f},
{"heli.swift2.cabin.outerConeAngle", 180.0f},
{"heli.swift2.cabin.radius", 1.5f},
{"heli.swift2.cabin.shadowBlur", 0.0f},
{"heli.swift2.cabin.useDynamicShadows", 0.0f},
{"heli.swift2.cabin.useSun", 0.0f},
{"heli.whiteheadlight.color.blue", 0.8f},
{"heli.whiteheadlight.color.green", 1.f},
{"heli.whiteheadlight.color.red", 1.f},
{"heli.whiteheadlight.farSize", 2.0f},
{"heli.whiteheadlight.farStrength", 60.0f},
{"heli.whiteheadlight.intensity", 4.0f},
{"heli.whiteheadlight.nearSize", 0.25f},
{"heli.whiteheadlight.nearStrength", 15.0f},
{"heli.whiteheadlight.radius", 2.5f},
{"heli.whitetaillight.color.blue", 0.8f},
{"heli.whitetaillight.color.green", 1.f},
{"heli.whitetaillight.color.red", 1.f},
{"heli.whitetaillight.farSize", 2.0f},
{"heli.whitetaillight.farStrength", 60.0f},
{"heli.whitetaillight.intensity", 4.0f},
{"heli.whitetaillight.nearSize", 0.25f},
{"heli.whitetaillight.nearStrength", 15.0f},
{"heli.whitetaillight.radius", 2.5f},
{"helisearchlight.color.blue", 0.03f},
{"helisearchlight.color.green", 0.03f},
{"helisearchlight.color.red", 0.03f},
{"helisearchlight.length", 100.0f},
{"helisearchlight.mainLightInfo.coronaIntensity", 100.0f},
{"helisearchlight.mainLightInfo.coronaIntensityFar", 50.0f},
{"helisearchlight.mainLightInfo.coronaOffset", 0.4f},
{"helisearchlight.mainLightInfo.coronaSize", 2.5f},
{"helisearchlight.mainLightInfo.coronaSizeFar", 35.0f},
{"helisearchlight.mainLightInfo.coronaZBias", 0.3f},
{"helisearchlight.mainLightInfo.enable", 1.0f},
{"helisearchlight.mainLightInfo.falloffExp", 8.0f},
{"helisearchlight.mainLightInfo.falloffScale", 2.0f},
{"helisearchlight.mainLightInfo.globalIntensity", 4.0f},
{"helisearchlight.mainLightInfo.innerAngle", 0.0f},
{"helisearchlight.mainLightInfo.lightFadeDist", 40.0f},
{"helisearchlight.mainLightInfo.lightIntensityScale", 10.0f},
{"helisearchlight.mainLightInfo.outerAngle", 5.0f},
{"helisearchlight.mainLightInfo.outerVolumeFallOffExponent", 50.0f},
{"helisearchlight.mainLightInfo.outerVolumeIntensity", 0.0f},
{"helisearchlight.mainLightInfo.shadow", 1.0f},
{"helisearchlight.mainLightInfo.specular", 1.0f},
{"helisearchlight.mainLightInfo.volume", 1.0f},
{"helisearchlight.mainLightInfo.volumeIntensityScale", 0.125f},
{"helisearchlight.mainLightInfo.volumeSizeScale", 0.5f},
{"helisearchlight.offset", -0.13f},
{"lights.cutoff.distance", 1000.0f},
{"lights.cutoff.nonGbuf.distance", 75.0f},
{"lights.cutoff.shadow.distance", 1001.0f},
{"lights.cutoff.specular.distance", 1002.0f},
{"lights.cutoff.volumetric.distance", 1003.0f},
{"lodlight.corona.size", 2.0f},
{"lodlight.large.corona.range", 1250.0f},
{"lodlight.large.fade", 50.0f},
{"lodlight.large.range", 2500.0f},
{"lodlight.medium.corona.range", 180.0f},
{"lodlight.medium.fade", 100.0f},
{"lodlight.medium.range", 750.0f},
{"lodlight.small.corona.range", 150.0f},
{"lodlight.small.fade", 50.0f},
{"lodlight.small.range", 250.0f},
{"lodlight.sphere.expand.end", 500.0f},
{"lodlight.sphere.expand.size.mult", 2.0f},
{"lodlight.sphere.expand.start", 50.0f},
{"misc.brightlight.coronaZBias", 1.0f},
{"misc.brightlight.distculled.FadeEnd", 80.0f},
{"misc.brightlight.distculled.FadeStart", 60.0f},
{"misc.brightlight.globalIntensity", 12.0f},
{"misc.brightlight.notdistculled.FadeEnd", 110.0f},
{"misc.brightlight.notdistculled.FadeStart", 100.0f},
{"misc.brightlight.railwayItensity", 2.5f},
{"misc.coronas.baseValueB", 0.0f},
{"misc.coronas.baseValueG", 0.0f},
{"misc.coronas.baseValueR", 0.0f},
{"misc.coronas.dir.mult.fadeoff.dist", 80.0f},
{"misc.coronas.dir.mult.fadeoff.start", 30.0f},
{"misc.coronas.flareColShiftB", 0.03f},
{"misc.coronas.flareColShiftG", 0.01f},
{"misc.coronas.flareColShiftR", 0.005f},
{"misc.coronas.flareCoronaSizeRatio", 0.17f},
{"misc.coronas.flareMinAngleDegToFadeIn", 30.0f},
{"misc.coronas.flareScreenCenterOffsetSizeMult", 200.0f},
{"misc.coronas.flareScreenCenterOffsetVerticalSizeMult", 0.95f},
{"misc.coronas.intensityScaleGlobal", 0.5f},
{"misc.coronas.intensityScaleWater", 0.5f},
{"misc.coronas.m_doNGCoronas", 1.0f},
{"misc.coronas.m_layer1Muliplier", 0.5f},
{"misc.coronas.m_layer2Muliplier", 0.5f},
{"misc.coronas.m_rotationSpeed", 0.05f},
{"misc.coronas.m_rotationSpeedRampedUp", 0.15f},
{"misc.coronas.m_scaleRampUp", 1.5f},
{"misc.coronas.m_scaleRampUpAngle", 20.0f},
{"misc.coronas.occlusionSizeMax", 32.0f},
{"misc.coronas.occlusionSizeScale", 0.5f},
{"misc.coronas.screenEdgeMinDistForFade", 0.95f},
{"misc.coronas.screenspaceExpansion", 0.0f},
{"misc.coronas.screenspaceExpansionWater", 0.0f},
{"misc.coronas.sizeScaleGlobal", 0.75f},
{"misc.coronas.sizeScaleParaboloid", 1.0f},
{"misc.coronas.sizeScaleWater", 0.5f},
{"misc.coronas.underwaterFadeDist", 4.0f},
{"misc.coronas.zBias.additionalBias.EnvReflection", 0.0f},
{"misc.coronas.zBias.additionalBias.MirrorReflection", 2.0f},
{"misc.coronas.zBias.additionalBias.WaterReflection", 5.0f},
{"misc.coronas.zBias.fromFinalSizeMultiplier", 0.1f},
{"misc.coronas.zBias.max", 0.35f},
{"misc.coronas.zBias.min", 0.0f},
{"misc.coronas.zBiasDistanceFar", 500.0f},
{"misc.coronas.zBiasDistanceNear", 50.0f},
{"misc.coronas.zBiasMultiplier", 30.0f},
{"misc.CrossPMultiplier.Desaturation", 1.0f},
{"misc.CrossPMultiplier.Farblur", 1.0f},
{"misc.CrossPMultiplier.Gamma", 1.0f},
{"misc.CrossPMultiplier.GlobalEnvironmentReflection", 1.0f},
{"misc.CrossPMultiplier.MidBlur", 1.0f},
{"misc.CrossPMultiplier.RimLight", 1.0f},
{"misc.CrossPMultiplier.SkyMultiplier", 1.0f},
{"misc.cutscene.nearBlurMin", 0.2f},
{"misc.DamageOverlay.AngleScalingMult", 0.0f},
{"misc.DamageOverlay.ColorBottom.blue", 0.15f},
{"misc.DamageOverlay.ColorBottom.green", 0.15f},
{"misc.DamageOverlay.ColorBottom.red", 0.8f},
{"misc.DamageOverlay.ColorTop.blue", 0.08f},
{"misc.DamageOverlay.ColorTop.green", 0.08f},
{"misc.DamageOverlay.ColorTop.red", 0.6f},
{"misc.DamageOverlay.colourBottomEndurance.blue", 0.32f},
{"misc.DamageOverlay.colourBottomEndurance.green", 0.59f},
{"misc.DamageOverlay.colourBottomEndurance.red", 0.99f},
{"misc.DamageOverlay.colourTopEndurance.blue", 0.32f},
{"misc.DamageOverlay.colourTopEndurance.green", 0.59f},
{"misc.DamageOverlay.colourTopEndurance.red", 0.99f},
{"misc.DamageOverlay.FP.AngleScalingMult", 0.0f},
{"misc.DamageOverlay.FP.ColorBottom.blue", 0.15f},
{"misc.DamageOverlay.FP.ColorBottom.green", 0.15f},
{"misc.DamageOverlay.FP.ColorBottom.red", 0.8f},
{"misc.DamageOverlay.FP.ColorTop.blue", 0.08f},
{"misc.DamageOverlay.FP.ColorTop.green", 0.08f},
{"misc.DamageOverlay.FP.ColorTop.red", 0.6f},
{"misc.DamageOverlay.FP.GlobalAlphaBottom", 0.2f},
{"misc.DamageOverlay.FP.GlobalAlphaTop", 0.45f},
{"misc.DamageOverlay.FP.HoldDuration", 400.0f},
{"misc.DamageOverlay.FP.RampDownDuration", 200.0f},
{"misc.DamageOverlay.FP.RampUpDuration", 75.0f},
{"misc.DamageOverlay.FP.SpriteBaseWidth", 0.27f},
{"misc.DamageOverlay.FP.SpriteLength", 0.4f},
{"misc.DamageOverlay.FP.SpriteTipWidth", 0.1f},
{"misc.DamageOverlay.GlobalAlphaBottom", 0.2f},
{"misc.DamageOverlay.GlobalAlphaTop", 0.4f},
{"misc.DamageOverlay.HoldDuration", 400.0f},
{"misc.DamageOverlay.RampDownDuration", 200.0f},
{"misc.DamageOverlay.RampUpDuration", 75.0f},
{"misc.DamageOverlay.ScreenSafeZoneLength", 0.45f},
{"misc.DamageOverlay.SpriteBaseWidth", 0.2f},
{"misc.DamageOverlay.SpriteLength", 0.3f},
{"misc.DamageOverlay.SpriteTipWidth", 0.1f},
{"misc.DOFBlurMultiplier.HD", 1.0f},
{"misc.MoonDimMult", 0.3f},
{"misc.Multiplier.farClipMultiplier", 1.0f},
{"misc.Multiplier.heightEnd", 250.0f},
{"misc.Multiplier.heightStart", 100.0f},
{"misc.Multiplier.nearFogMultiplier", 1.0f},
{"misc.NextGenModifier", 1.0f},
{"misc.SniperRifleDof.Enabled", 0.0f},
{"misc.SniperRifleDof.FarEnd", 5000.0f},
{"misc.SniperRifleDof.FarStart", 5000.0f},
{"misc.SniperRifleDof.NearEnd", 0.0f},
{"misc.SniperRifleDof.NearStart", 0.0f},
{"particles.shadowintensity", 0.5f},
{"ped.ambientvolume.baseintensity", 0.0f},
{"ped.ambientvolume.fadeend", 20.0f},
{"ped.ambientvolume.fadestart", 16.0f},
{"ped.ambientvolume.maxstrength", 1.0f},
{"ped.incarAmbientScale", 0.4f},
{"ped.light.direction.x", -0.825f},
{"ped.light.direction.y", 0.565f},
{"ped.light.direction.z", 0.0f},
{"ped.light.fade.day.end", 6.0f},
{"ped.light.fade.day.start", 5.99f},
{"ped.light.fade.night.end", 20.0f},
{"ped.light.fade.night.start", 19.99f},
{"ped.lod.distance.high", 25.0f},
{"ped.lod.distance.low", 80.0f},
{"ped.lod.distance.medium", 50.0f},
{"ped.phonelight.color.b", 1.0f},
{"ped.phonelight.color.g", 1.0f},
{"ped.phonelight.color.r", 1.0f},
{"ped.phonelight.cone.inner", 0.0f},
{"ped.phonelight.cone.outer", 90.0f},
{"ped.phonelight.falloffexp", 15.0f},
{"ped.phonelight.intensity", 4.0f},
{"ped.phonelight.radius", 0.9f},
{"pedFootLight.capsuleLength", 0.1f},
{"pedFootLight.color.blue", 1.f},
{"pedFootLight.color.green", 1.f},
{"pedFootLight.color.red", 1.f},
{"pedFootLight.coronaHDR", 1.0f},
{"pedFootLight.coronaSize", 1.0f},
{"pedFootLight.fade", 20.0f},
{"pedFootLight.falloffExp", 11.0f},
{"pedFootLight.innerConeAngle", 0.0f},
{"pedFootLight.intensity", 6.0f},
{"pedFootLight.outerConeAngle", 0.0f},
{"pedFootLight.radius", 0.15f},
{"pedFootLight.shadowBlur", 0.0f},
{"pedFootLight.SpecularFade", 10.0f},
{"pedFootLight.useDynamicShadows", 0.0f},
{"pedFootLight.useSun", 0.0f},
{"pedFpsLight.capsuleLength", 0.0f},
{"pedFpsLight.color.blue", 1.f},
{"pedFpsLight.color.green", 1.f},
{"pedFpsLight.color.red", 1.f},
{"pedFpsLight.coronaHDR", 1.0f},
{"pedFpsLight.coronaSize", 2.087f},
{"pedFpsLight.fade", 20.0f},
{"pedFpsLight.falloffExp", 128.0f},
{"pedFpsLight.innerConeAngle", 30.0f},
{"pedFpsLight.intensity", 6.0f},
{"pedFpsLight.outerConeAngle", 45.0f},
{"pedFpsLight.radius", 16.0f},
{"pedFpsLight.shadowBlur", 0.0f},
{"pedFpsLight.shadowFade", 15.0f},
{"pedFpsLight.SpecularFade", 10.0f},
{"pedFpsLight.useDynamicShadows", 0.0f},
{"pedFpsLight.useSun", 0.0f},
{"pedFpsLight.volumeExponent", 70.0f},
{"pedFpsLight.volumeIntensity", 0.05f},
{"pedFpsLight.volumeSize", 0.4f},
{"pedincar.lod.distance.high", 15.0f},
{"pedlight.capsuleLength", 0.0f},
{"pedlight.color.blue", 1.f},
{"pedlight.color.green", 1.f},
{"pedlight.color.red", 1.f},
{"pedlight.coronaHDR", 1.0f},
{"pedlight.coronaSize", 2.087f},
{"pedlight.fade", 20.0f},
{"pedlight.falloffExp", 32.0f},
{"pedlight.innerConeAngle", 30.0f},
{"pedlight.intensity", 6.0f},
{"pedlight.outerConeAngle", 45.0f},
{"pedlight.radius", 6.0f},
{"pedlight.shadowBlur", 0.0f},
{"pedlight.shadowFade", 15.0f},
{"pedlight.SpecularFade", 10.0f},
{"pedlight.useDynamicShadows", 0.0f},
{"pedlight.useSun", 0.0f},
{"pedlight.volumeExponent", 70.0f},
{"pedlight.volumeIntensity", 0.3f},
{"pedlight.volumeSize", 0.4f},
{"plane.controlpanel.light.color.blue", 1.f},
{"plane.controlpanel.light.color.green", 0.f},
{"plane.controlpanel.light.color.red", 0.f},
{"plane.controlpanel.light.falloff", 1.0f},
{"plane.controlpanel.light.falloff.exponent", 32.0f},
{"plane.controlpanel.light.intensity", 3.0f},
{"plane.emergency.left.light.color.blue", 0.f},
{"plane.emergency.left.light.color.green", 0.5f},
{"plane.emergency.left.light.color.red", 1.f},
{"plane.emergency.left.light.falloff", 10.0f},
{"plane.emergency.left.light.falloff.exponent", 32.0f},
{"plane.emergency.left.light.inner.angle", 60.0f},
{"plane.emergency.left.light.intensity", 32.0f},
{"plane.emergency.left.light.outer.angle", 65.0f},
{"plane.emergency.left.light.rotation", 270.0f},
{"plane.emergency.right.light.color.blue", 0.f},
{"plane.emergency.right.light.color.green", 0.5f},
{"plane.emergency.right.light.color.red", 1.f},
{"plane.emergency.right.light.falloff", 8.0f},
{"plane.emergency.right.light.falloff.exponent", 32.0f},
{"plane.emergency.right.light.inner.angle", 60.0f},
{"plane.emergency.right.light.intensity", 0.0f},
{"plane.emergency.right.light.outer.angle", 65.0f},
{"plane.emergency.right.light.rotation", 270.0f},
{"plane.insidehull.light.color.blue", 1.f},
{"plane.insidehull.light.color.green", 1.f},
{"plane.insidehull.light.color.red", 1.f},
{"plane.insidehull.light.falloff", 6.0f},
{"plane.insidehull.light.falloff.exponent", 4.0f},
{"plane.insidehull.light.inner.angle", 60.0f},
{"plane.insidehull.light.intensity", 0.0f},
{"plane.insidehull.light.outer.angle", 85.0f},
{"plane.luxe2.cabin.capsuleLength", 0.0f},
{"plane.luxe2.cabin.color.blue", 1.f},
{"plane.luxe2.cabin.color.green", 1.f},
{"plane.luxe2.cabin.color.red", 1.f},
{"plane.luxe2.cabin.coronaHDR", 1.0f},
{"plane.luxe2.cabin.coronaSize", 1.0f},
{"plane.luxe2.cabin.falloffExp", 8.0f},
{"plane.luxe2.cabin.innerConeAngle", 20.0f},
{"plane.luxe2.cabin.intensity", 5.0f},
{"plane.luxe2.cabin.lod.capsuleLength", 6.5f},
{"plane.luxe2.cabin.lod.color.blue", 1.f},
{"plane.luxe2.cabin.lod.color.green", 1.f},
{"plane.luxe2.cabin.lod.color.red", 1.f},
{"plane.luxe2.cabin.lod.coronaHDR", 1.0f},
{"plane.luxe2.cabin.lod.coronaSize", 1.0f},
{"plane.luxe2.cabin.lod.falloffExp", 1.0f},
{"plane.luxe2.cabin.lod.innerConeAngle", 0.0f},
{"plane.luxe2.cabin.lod.intensity", 1.1f},
{"plane.luxe2.cabin.lod.outerConeAngle", 0.0f},
{"plane.luxe2.cabin.lod.radius", 1.0f},
{"plane.luxe2.cabin.lod.shadowBlur", 0.0f},
{"plane.luxe2.cabin.lod.useDynamicShadows", 0.0f},
{"plane.luxe2.cabin.lod.useSun", 0.0f},
{"plane.luxe2.cabin.outerConeAngle", 180.0f},
{"plane.luxe2.cabin.radius", 2.4f},
{"plane.luxe2.cabin.shadowBlur", 0.0f},
{"plane.luxe2.cabin.strip.capsuleLength", 4.7f},
{"plane.luxe2.cabin.strip.color.blue", 1.f},
{"plane.luxe2.cabin.strip.color.green", 1.f},
{"plane.luxe2.cabin.strip.color.red", 1.f},
{"plane.luxe2.cabin.strip.coronaHDR", 1.0f},
{"plane.luxe2.cabin.strip.coronaSize", 1.0f},
{"plane.luxe2.cabin.strip.falloffExp", 128.0f},
{"plane.luxe2.cabin.strip.innerConeAngle", 0.0f},
{"plane.luxe2.cabin.strip.intensity", 3.0f},
{"plane.luxe2.cabin.strip.outerConeAngle", 0.0f},
{"plane.luxe2.cabin.strip.radius", 1.63f},
{"plane.luxe2.cabin.strip.shadowBlur", 0.0f},
{"plane.luxe2.cabin.strip.useDynamicShadows", 0.0f},
{"plane.luxe2.cabin.strip.useSun", 0.0f},
{"plane.luxe2.cabin.tv.capsuleLength", 0.0f},
{"plane.luxe2.cabin.tv.color.blue", 0.97f},
{"plane.luxe2.cabin.tv.color.green", 0.22f},
{"plane.luxe2.cabin.tv.color.red", 0.07f},
{"plane.luxe2.cabin.tv.coronaHDR", 1.0f},
{"plane.luxe2.cabin.tv.coronaSize", 1.0f},
{"plane.luxe2.cabin.tv.falloffExp", 8.0f},
{"plane.luxe2.cabin.tv.innerConeAngle", 20.0f},
{"plane.luxe2.cabin.tv.intensity", 3.0f},
{"plane.luxe2.cabin.tv.outerConeAngle", 180.0f},
{"plane.luxe2.cabin.tv.radius", 1.5f},
{"plane.luxe2.cabin.tv.shadowBlur", 0.0f},
{"plane.luxe2.cabin.tv.useDynamicShadows", 0.0f},
{"plane.luxe2.cabin.tv.useSun", 0.0f},
{"plane.luxe2.cabin.useDynamicShadows", 0.0f},
{"plane.luxe2.cabin.useSun", 0.0f},
{"plane.luxe2.cabin.window.capsuleLength", 0.0f},
{"plane.luxe2.cabin.window.color.blue", 1.f},
{"plane.luxe2.cabin.window.color.green", 1.f},
{"plane.luxe2.cabin.window.color.red", 1.f},
{"plane.luxe2.cabin.window.coronaHDR", 1.0f},
{"plane.luxe2.cabin.window.coronaSize", 1.0f},
{"plane.luxe2.cabin.window.falloffExp", 32.0f},
{"plane.luxe2.cabin.window.innerConeAngle", 0.0f},
{"plane.luxe2.cabin.window.intensity", 0.5f},
{"plane.luxe2.cabin.window.outerConeAngle", 90.0f},
{"plane.luxe2.cabin.window.radius", 1.3f},
{"plane.luxe2.cabin.window.shadowBlur", 0.0f},
{"plane.luxe2.cabin.window.useDynamicShadows", 0.0f},
{"plane.luxe2.cabin.window.useSun", 1.0f},
{"plane.poslight.farSize", 15.0f},
{"plane.poslight.farStrength", 10.0f},
{"plane.poslight.intensity_typeA", 12.0f},
{"plane.poslight.intensity_typeB", 12.0f},
{"plane.poslight.leftColor.blue", 0.f},
{"plane.poslight.leftColor.green", 0.f},
{"plane.poslight.leftColor.red", 1.f},
{"plane.poslight.nearSize", 1.0f},
{"plane.poslight.nearStrength", 1.0f},
{"plane.poslight.radius", 2.0f},
{"plane.poslight.rightColor.blue", 0.f},
{"plane.poslight.rightColor.green", 1.f},
{"plane.poslight.rightColor.red", 0.f},
{"plane.whiteheadlight.color.blue", 0.8f},
{"plane.whiteheadlight.color.green", 1.f},
{"plane.whiteheadlight.color.red", 1.f},
{"plane.whiteheadlight.farSize", 15.0f},
{"plane.whiteheadlight.farStrength", 10.0f},
{"plane.whiteheadlight.intensity", 4.0f},
{"plane.whiteheadlight.nearSize", 1.25f},
{"plane.whiteheadlight.nearStrength", 1.0f},
{"plane.whiteheadlight.radius", 1.75f},
{"plane.whitetaillight.color.blue", 0.8f},
{"plane.whitetaillight.color.green", 1.f},
{"plane.whitetaillight.color.red", 1.f},
{"plane.whitetaillight.farSize", 15.0f},
{"plane.whitetaillight.farStrength", 10.0f},
{"plane.whitetaillight.intensity", 6.0f},
{"plane.whitetaillight.nearSize", 0.5f},
{"plane.whitetaillight.nearStrength", 1.0f},
{"plane.whitetaillight.radius", 1.75f},
{"procObjects.minRadiusForHeightMap", 0.4f},
{"puddles.depth", 0.9f},
{"puddles.depthtest", 0.2f},
{"puddles.range", 0.15f},
{"puddles.reflectivity", 1.0f},
{"puddles.ripples.dropfactor", 0.8f},
{"puddles.ripples.maxduration", 5.0f},
{"puddles.ripples.maxsize", 0.02f},
{"puddles.ripples.minduration", 4.0f},
{"puddles.ripples.minsize", 0.012f},
{"puddles.ripples.playermapsize", 8.0f},
{"puddles.ripples.playerspeed", 10.0f},
{"puddles.ripples.ripplestrength", 0.7f},
{"puddles.ripples.speed", 10.0f},
{"puddles.ripples.winddamping", 0.05f},
{"puddles.ripples.windstrength", 0.03f},
{"puddles.scale", 0.015f},
{"raincollision.specularoffset", 1.0f},
{"seeThrough.ColorFar.blue", 0.16f},
{"seeThrough.ColorFar.green", 0.05f},
{"seeThrough.ColorFar.red", 0.03f},
{"seeThrough.ColorNear.blue", 0.14f},
{"seeThrough.ColorNear.green", 0.02f},
{"seeThrough.ColorNear.red", 0.06f},
{"seeThrough.ColorVisibleBase.blue", 0.f},
{"seeThrough.ColorVisibleBase.green", 0.f},
{"seeThrough.ColorVisibleBase.red", 0.78f},
{"seeThrough.ColorVisibleHot.blue", 1.f},
{"seeThrough.ColorVisibleHot.green", 0.99f},
{"seeThrough.ColorVisibleHot.red", 0.95f},
{"seeThrough.ColorVisibleWarm.blue", 0.f},
{"seeThrough.ColorVisibleWarm.green", 0.65f},
{"seeThrough.ColorVisibleWarm.red", 0.85f},
{"seeThrough.FadeEndDistance", 1100.0f},
{"seeThrough.FadeStartDistance", 50.0f},
{"seeThrough.HiLightIntensity", 0.5f},
{"seeThrough.HiLightNoise", 0.5f},
{"seeThrough.MaxNoiseAmount", 1.0f},
{"seeThrough.MaxThickness", 10000.0f},
{"seeThrough.MinNoiseAmount", 0.25f},
{"seeThrough.PedQuadEndDistance", 1500.0f},
{"seeThrough.PedQuadScale", 12.0f},
{"seeThrough.PedQuadSize", 0.35f},
{"seeThrough.PedQuadStartDistance", 0.0f},
{"skyplane.fog.fade.end", 128.0f},
{"skyplane.fog.fade.start", 64.0f},
{"skyplane.offset", 512.0f},
{"sub.lightOne.capsuleLength", 0.0f},
{"sub.lightOne.color.blue", 1.f},
{"sub.lightOne.color.green", 0.3f},
{"sub.lightOne.color.red", 0.1f},
{"sub.lightOne.coronaHDR", 0.0f},
{"sub.lightOne.coronaSize", 0.0f},
{"sub.lightOne.falloffExp", 8.0f},
{"sub.lightOne.innerConeAngle", 0.0f},
{"sub.lightOne.intensity", 32.0f},
{"sub.lightOne.outerConeAngle", 89.0f},
{"sub.lightOne.radius", 3.0f},
{"sub.lightOne.shadowBlur", 0.0f},
{"sub.lightOne.useDynamicShadows", 0.0f},
{"sub.lightOne.useSun", 0.0f},
{"sub.lightTwo.capsuleLength", 0.0f},
{"sub.lightTwo.color.blue", 0.5f},
{"sub.lightTwo.color.green", 1.f},
{"sub.lightTwo.color.red", 0.2f},
{"sub.lightTwo.coronaHDR", 0.0f},
{"sub.lightTwo.coronaSize", 0.0f},
{"sub.lightTwo.falloffExp", 8.0f},
{"sub.lightTwo.innerConeAngle", 0.0f},
{"sub.lightTwo.intensity", 32.0f},
{"sub.lightTwo.outerConeAngle", 89.0f},
{"sub.lightTwo.radius", 2.0f},
{"sub.lightTwo.shadowBlur", 0.0f},
{"sub.lightTwo.useDynamicShadows", 0.0f},
{"sub.lightTwo.useSun", 0.0f},
{"Tonemapping.bright.filmic.A", 0.22f},
{"Tonemapping.bright.filmic.B", 0.3f},
{"Tonemapping.bright.filmic.C", 0.1f},
{"Tonemapping.bright.filmic.D", 0.2f},
{"Tonemapping.bright.filmic.E", 0.01f},
{"Tonemapping.bright.filmic.exposure", -0.5f},
{"Tonemapping.bright.filmic.F", 0.3f},
{"Tonemapping.bright.filmic.W", 4.0f},
{"Tonemapping.dark.filmic.A", 0.22f},
{"Tonemapping.dark.filmic.B", 0.3f},
{"Tonemapping.dark.filmic.C", 0.1f},
{"Tonemapping.dark.filmic.D", 0.2f},
{"Tonemapping.dark.filmic.E", 0.0f},
{"Tonemapping.dark.filmic.exposure", 3.0f},
{"Tonemapping.dark.filmic.F", 0.3f},
{"Tonemapping.dark.filmic.W", 4.0f},
{"trafficLight.amber.color.blue", 0.001f},
{"trafficLight.amber.color.green", 0.3f},
{"trafficLight.amber.color.red", 1.f},
{"trafficLight.dontwalk.color.blue", 0.0001f},
{"trafficLight.dontwalk.color.green", 0.003f},
{"trafficLight.dontwalk.color.red", 1.f},
{"trafficLight.farFadeEnd", 120.0f},
{"trafficLight.farFadeStart", 100.0f},
{"trafficLight.green.color.blue", 0.135f},
{"trafficLight.green.color.green", 1.f},
{"trafficLight.green.color.red", 0.01f},
{"trafficLight.near.capsuleLength", 0.0f},
{"trafficLight.near.coronaHDR", 10.0f},
{"trafficLight.near.coronaSize", 1.5f},
{"trafficLight.near.falloffExp", 4.0f},
{"trafficLight.near.innerConeAngle", 0.1f},
{"trafficLight.near.intensity", 1.75f},
{"trafficLight.near.na.color.blue", 1.f},
{"trafficLight.near.na.color.green", 1.f},
{"trafficLight.near.na.color.red", 1.f},
{"trafficLight.near.outerConeAngle", 10.0f},
{"trafficLight.near.radius", 1.5f},
{"trafficLight.near.shadowBlur", 0.0f},
{"trafficLight.near.useDynamicShadows", 0.0f},
{"trafficLight.near.useSun", 0.0f},
{"trafficLight.nearFadeEnd", 35.0f},
{"trafficLight.nearFadeStart", 30.0f},
{"trafficLight.red.color.blue", 0.0001f},
{"trafficLight.red.color.green", 0.003f},
{"trafficLight.red.color.red", 1.f},
{"trafficLight.walk.color.blue", 1.f},
{"trafficLight.walk.color.green", 1.f},
{"trafficLight.walk.color.red", 1.f},
{"train.ambientvolume.intensityscaler", 2.0f},
{"train.light.b", 0.8f},
{"train.light.fadelength", 10.0f},
{"train.light.fadingdistance", 100.0f},
{"train.light.falloffmax", 2.1f},
{"train.light.g", 1.0f},
{"train.light.intensity", 3.0f},
{"train.light.r", 1.0f},
{"UI.minimap.alpha", 0.6f},
{"vehicle.lights.fadeDistance.AO", 150.0f},
{"vehicle.lights.fadeDistance.main", 80.0f},
{"vehicle.lights.fadeDistance.neon", 80.0f},
{"vehicle.lights.fadeDistance.secondary", 40.0f},
{"vehicle.lights.fadeDistance.sirens", 150.0f},
{"vehicle.lights.fadeLength", 10.0f},
{"vehicle.lights.sunrise", 6.5f},
{"vehicle.lights.sunset", 20.0f},
{"weather.ChangeCloudOnSameCloudTypeChance", 0.5f},
{"weather.ChangeCloudOnSameWeatherTypeChance", 0.5f},
{"weather.CycleDuration", 120.0f},
	};
}
