#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Ambience/Legacy/PostProcessingSetup.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rowlan/Genesis/Ambience/Legacy/zzzz__PostProcessingSetup_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessLayer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessProfile_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessVolume_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::*)()>(&::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::__cordl_internal_get_camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::__cordl_internal_get_camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr void Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___camera = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>& Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::__cordl_internal_get_postProcessLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postProcessLayer;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer> const& Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::__cordl_internal_get_postProcessLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postProcessLayer;
}
constexpr void Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::__cordl_internal_set_postProcessLayer(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postProcessLayer = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>& Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::__cordl_internal_get_postProcessVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postProcessVolume;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume> const& Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::__cordl_internal_get_postProcessVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postProcessVolume;
}
constexpr void Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::__cordl_internal_set_postProcessVolume(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postProcessVolume = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>& Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::__cordl_internal_get_postProcessProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postProcessProfile;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile> const& Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::__cordl_internal_get_postProcessProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postProcessProfile;
}
constexpr void Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::__cordl_internal_set_postProcessProfile(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessProfile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postProcessProfile = value;
}
inline void Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup* Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Ambience::Legacy::PostProcessingSetup::PostProcessingSetup()   {
}
