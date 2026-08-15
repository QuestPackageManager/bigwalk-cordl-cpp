#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckSystemReference.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckSystemReference_PredictionType::PeckSystemReference_PredictionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckSystemReference_PredictionType::PeckSystemReference_PredictionType()   {
}
constexpr ::GlobalNamespace::PeckSystemReference_PredictionType  GlobalNamespace::PeckSystemReference_PredictionType::DefaultForEffect{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckSystemReference_PredictionType  GlobalNamespace::PeckSystemReference_PredictionType::Always{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PeckSystemReference_PredictionType  GlobalNamespace::PeckSystemReference_PredictionType::Never{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::PeckSystemReference.ShouldPredict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PeckSystemReference::*)()>(&::GlobalNamespace::PeckSystemReference::ShouldPredict)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180454230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSystemReference>(),
                        {"ShouldPredict", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckSystemReference.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckSystemReference::*)(::GlobalNamespace::PeckContext, ::GlobalNamespace::TrackedPeckState*)>(&::GlobalNamespace::PeckSystemReference::Peck)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180454170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSystemReference>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckSystemReference.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckSystemReference::*)(::System::Action_1<::GlobalNamespace::PeckContext>*, bool)>(&::GlobalNamespace::PeckSystemReference::Initialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804540f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSystemReference>(),
                        {"Initialize", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::PeckContext>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckSystemReference.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckSystemReference::*)(::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*, bool)>(&::GlobalNamespace::PeckSystemReference::Initialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180454070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSystemReference>(),
                        {"Initialize", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PeckSystemReference::ShouldPredict()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSystemReference>(),
                        {"ShouldPredict", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::PeckSystemReference::Peck(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::TrackedPeckState*  peckSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSystemReference>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>(), ::i2c::type_of<::GlobalNamespace::TrackedPeckState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, peckContext, peckSystem);
}
inline void GlobalNamespace::PeckSystemReference::Initialize(::System::Action_1<::GlobalNamespace::PeckContext>*  onPeck, bool  canPredictPeck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSystemReference>(),
                        {"Initialize", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::PeckContext>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, onPeck, canPredictPeck);
}
inline void GlobalNamespace::PeckSystemReference::Initialize(::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*  onPeck, bool  canPredictPeck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSystemReference>(),
                        {"Initialize", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, onPeck, canPredictPeck);
}
// Ctor Parameters [CppParam { name: "peckSystem", ty: "::UnityW<::GlobalNamespace::TrackedPeckState>", modifiers: "", def_value: Some("{}") }, CppParam { name: "priority", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prediction", ty: "::GlobalNamespace::PeckSystemReference_PredictionType", modifiers: "", def_value: Some("{}") }, CppParam { name: "effectDefaultPrediction", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "onPeck", ty: "::System::Action_1<::GlobalNamespace::PeckContext>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "onPeckWithSystemReference", ty: "::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckSystemReference::PeckSystemReference(::UnityW<::GlobalNamespace::TrackedPeckState>  peckSystem, int32_t  priority, ::GlobalNamespace::PeckSystemReference_PredictionType  prediction, bool  effectDefaultPrediction, ::System::Action_1<::GlobalNamespace::PeckContext>*  onPeck, ::System::Action_2<::GlobalNamespace::PeckContext,::UnityW<::GlobalNamespace::TrackedPeckState>>*  onPeckWithSystemReference) noexcept  {
this->peckSystem = peckSystem;
this->priority = priority;
this->prediction = prediction;
this->effectDefaultPrediction = effectDefaultPrediction;
this->onPeck = onPeck;
this->onPeckWithSystemReference = onPeckWithSystemReference;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckSystemReference::PeckSystemReference()   {
}
