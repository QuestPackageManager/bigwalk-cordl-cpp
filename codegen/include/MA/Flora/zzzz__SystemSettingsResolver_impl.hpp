#pragma once
// IWYU pragma private; include "MA/Flora/SystemSettingsResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__SystemSettingsResolver_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeSettings_def.hpp"
#include "MA/Flora/zzzz__ResolvedSystemSettings_def.hpp"
//  Writing Method size for method: ::MA::Flora::SystemSettingsResolver.EvaluateDetailStreamingResponsiveness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::MA::Flora::SystemSettingsResolver::EvaluateDetailStreamingResponsiveness)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814f4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SystemSettingsResolver*>(),
                        {"EvaluateDetailStreamingResponsiveness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SystemSettingsResolver.ResolveDetailPatchLayerBudget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::MA::Flora::SystemSettingsResolver::ResolveDetailPatchLayerBudget)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814f41c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SystemSettingsResolver*>(),
                        {"ResolveDetailPatchLayerBudget", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SystemSettingsResolver.ResolveDetailStructuralBudget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::MA::Flora::SystemSettingsResolver::ResolveDetailStructuralBudget)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814f4230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SystemSettingsResolver*>(),
                        {"ResolveDetailStructuralBudget", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SystemSettingsResolver.ResolveSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ResolvedSystemSettings (*)(::MA::Flora::FloraRuntimeSettings*)>(&::MA::Flora::SystemSettingsResolver::ResolveSettings)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1814f42a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SystemSettingsResolver*>(),
                        {"ResolveSettings", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SystemSettingsResolver.get_DisableInstanceRenderersInEditMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::MA::Flora::SystemSettingsResolver::get_DisableInstanceRenderersInEditMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SystemSettingsResolver*>(),
                        {"get_DisableInstanceRenderersInEditMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t MA::Flora::SystemSettingsResolver::EvaluateDetailStreamingResponsiveness(float_t  responsiveness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SystemSettingsResolver*>(),
                        {"EvaluateDetailStreamingResponsiveness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, responsiveness);
}
inline int32_t MA::Flora::SystemSettingsResolver::ResolveDetailPatchLayerBudget(float_t  responsiveness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SystemSettingsResolver*>(),
                        {"ResolveDetailPatchLayerBudget", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, responsiveness);
}
inline int32_t MA::Flora::SystemSettingsResolver::ResolveDetailStructuralBudget(float_t  responsiveness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SystemSettingsResolver*>(),
                        {"ResolveDetailStructuralBudget", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, responsiveness);
}
inline ::MA::Flora::ResolvedSystemSettings MA::Flora::SystemSettingsResolver::ResolveSettings(::MA::Flora::FloraRuntimeSettings*  runtimeSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SystemSettingsResolver*>(),
                        {"ResolveSettings", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ResolvedSystemSettings>(nullptr, ___internal_method, runtimeSettings);
}
inline bool MA::Flora::SystemSettingsResolver::get_DisableInstanceRenderersInEditMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SystemSettingsResolver*>(),
                        {"get_DisableInstanceRenderersInEditMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::MA::Flora::SystemSettingsResolver::SystemSettingsResolver()   {
}
