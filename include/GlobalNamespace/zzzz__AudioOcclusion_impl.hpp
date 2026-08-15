#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioOcclusion.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionBase_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__Ray_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusion_def.hpp"
#include "GlobalNamespace/zzzz__AudioMaterialConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusion_def.hpp"
#include "GlobalNamespace/zzzz__FixedSizeFloatQueue_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "result", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "newVoiceBlock", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioOcclusion_ResultData::AudioOcclusion_ResultData(float_t  result, float_t  newVoiceBlock) noexcept  {
this->result = result;
this->newVoiceBlock = newVoiceBlock;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioOcclusion_ResultData::AudioOcclusion_ResultData()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion_RaycastRequest.GetVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::AudioOcclusion_RaycastRequest::*)()>(&::GlobalNamespace::AudioOcclusion_RaycastRequest::GetVector)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180497ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion_RaycastRequest>(),
                        {"GetVector", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::AudioOcclusion_RaycastRequest::GetVector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion_RaycastRequest>(),
                        {"GetVector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "ray", ty: "::UnityEngine::Ray", modifiers: "", def_value: Some("{}") }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioOcclusion_RaycastRequest::AudioOcclusion_RaycastRequest(::UnityEngine::Ray  ray, float_t  distance) noexcept  {
this->ray = ray;
this->distance = distance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioOcclusion_RaycastRequest::AudioOcclusion_RaycastRequest()   {
}
// Ctor Parameters [CppParam { name: "vector", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "ray", ty: "::UnityEngine::Ray", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo::AudioOcclusion_SkippedRaycastInfo(::UnityEngine::Vector3  vector, ::UnityEngine::Ray  ray) noexcept  {
this->vector = vector;
this->ray = ray;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo::AudioOcclusion_SkippedRaycastInfo()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::get_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"get_Layer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.get_DetectTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::QueryTriggerInteraction (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::get_DetectTrigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"get_DetectTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.get_OutOfRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::get_OutOfRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"get_OutOfRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.get_RandomPointTowardsSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::get_RandomPointTowardsSource)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"get_RandomPointTowardsSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.set_RandomPointTowardsSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusion::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::AudioOcclusion::set_RandomPointTowardsSource)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e0b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"set_RandomPointTowardsSource", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.get_OccLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::get_OccLvl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.set_OccLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusion::*)(float_t)>(&::GlobalNamespace::AudioOcclusion::set_OccLvl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.get_VoiceBlockingLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::get_VoiceBlockingLvl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180487750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.set_VoiceBlockingLvl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusion::*)(float_t)>(&::GlobalNamespace::AudioOcclusion::set_VoiceBlockingLvl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180487760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.UpdateOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::UpdateOcclusion)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180487550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusion::*)(::GlobalNamespace::AudioOcclusionConfig*)>(&::GlobalNamespace::AudioOcclusion::Initialize)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1804857a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                    {::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.PrepareRaycasts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::PrepareRaycasts)> {
  constexpr static std::size_t size = 0xa90;
  constexpr static std::size_t addrs = 0x180485ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"PrepareRaycasts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.CalculateOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusion::*)(bool)>(&::GlobalNamespace::AudioOcclusion::CalculateOcclusion)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804855a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"CalculateOcclusion", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.ProcessRaycasts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusion::*)(bool)>(&::GlobalNamespace::AudioOcclusion::ProcessRaycasts)> {
  constexpr static std::size_t size = 0x9b0;
  constexpr static std::size_t addrs = 0x1804869e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"ProcessRaycasts", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.ProcessNextRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioOcclusion::*)(::ArrayW<::UnityEngine::RaycastHit>, bool, ::by_ref<::GlobalNamespace::AudioOcclusion_RaycastRequest>)>(&::GlobalNamespace::AudioOcclusion::ProcessNextRaycast)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x180486710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"ProcessNextRaycast", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AudioOcclusion_RaycastRequest>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.GetNextSkippedInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::GetNextSkippedInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180485720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"GetNextSkippedInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.ApplyAsyncRaycastResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusion::*)(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>, int32_t)>(&::GlobalNamespace::AudioOcclusion::ApplyAsyncRaycastResults)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180485490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"ApplyAsyncRaycastResults", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.SetAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusion::*)(bool)>(&::GlobalNamespace::AudioOcclusion::SetAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180487390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"SetAsync", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.UpdateOcclusionValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::UpdateOcclusionValues)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180487440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"UpdateOcclusionValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.ProcessHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioOcclusion_ResultData (::GlobalNamespace::AudioOcclusion::*)(::UnityEngine::RaycastHit, ::GlobalNamespace::AudioOcclusion_ResultData)>(&::GlobalNamespace::AudioOcclusion::ProcessHit)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180486630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"ProcessHit", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::GlobalNamespace::AudioOcclusion_ResultData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.CountBlockingHits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioOcclusion::*)(::ArrayW<::UnityEngine::RaycastHit>, int32_t)>(&::GlobalNamespace::AudioOcclusion::CountBlockingHits)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180485660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"CountBlockingHits", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.HasVoiceBlockingMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::HasVoiceBlockingMaterials)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180485780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"HasVoiceBlockingMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion.ShouldCheckIgnore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::AudioOcclusion::ShouldCheckIgnore)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804873a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"ShouldCheckIgnore", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioOcclusion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioOcclusion::*)()>(&::GlobalNamespace::AudioOcclusion::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804876b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AudioOcclusion::__cordl_internal_get_Debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Debug;
}
constexpr bool const& GlobalNamespace::AudioOcclusion::__cordl_internal_get_Debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Debug;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set_Debug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Debug = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::AudioOcclusion::__cordl_internal_get__layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layer;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layer;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__layer(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layer = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& GlobalNamespace::AudioOcclusion::__cordl_internal_get__detectTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectTrigger;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__detectTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectTrigger;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__detectTrigger(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____detectTrigger = value;
}
constexpr bool& GlobalNamespace::AudioOcclusion::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr bool& GlobalNamespace::AudioOcclusion::__cordl_internal_get__outOfRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outOfRange;
}
constexpr bool const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__outOfRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outOfRange;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__outOfRange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outOfRange = value;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue*& GlobalNamespace::AudioOcclusion::__cordl_internal_get__collideInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collideInfo;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__collideInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collideInfo;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__collideInfo(::GlobalNamespace::FixedSizeFloatQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collideInfo = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusion::__cordl_internal_get__minDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistance;
}
constexpr float_t const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__minDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minDistance;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__minDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minDistance = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusion::__cordl_internal_get__maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr float_t const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistance = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusion::__cordl_internal_get__maxDistanceSquared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistanceSquared;
}
constexpr float_t const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__maxDistanceSquared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistanceSquared;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__maxDistanceSquared(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistanceSquared = value;
}
constexpr int32_t& GlobalNamespace::AudioOcclusion::__cordl_internal_get__updateRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRate;
}
constexpr int32_t const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__updateRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRate;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__updateRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateRate = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusion::__cordl_internal_get__avg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____avg;
}
constexpr float_t const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__avg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____avg;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__avg(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____avg = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::AudioOcclusion::__cordl_internal_get__hitRandomSPInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitRandomSPInfo;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__hitRandomSPInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitRandomSPInfo;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__hitRandomSPInfo(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitRandomSPInfo = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::AudioOcclusion::__cordl_internal_get__hitRandomPSInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitRandomPSInfo;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__hitRandomPSInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitRandomPSInfo;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__hitRandomPSInfo(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitRandomPSInfo = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::AudioOcclusion::__cordl_internal_get__hitAroundPlayerInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitAroundPlayerInfo;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__hitAroundPlayerInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitAroundPlayerInfo;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__hitAroundPlayerInfo(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitAroundPlayerInfo = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::AudioOcclusion::__cordl_internal_get__hitAroundSourceInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitAroundSourceInfo;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__hitAroundSourceInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitAroundSourceInfo;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__hitAroundSourceInfo(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitAroundSourceInfo = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::AudioOcclusion::__cordl_internal_get__hitCenterInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitCenterInfo;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__hitCenterInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitCenterInfo;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__hitCenterInfo(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitCenterInfo = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig>& GlobalNamespace::AudioOcclusion::__cordl_internal_get__materialConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig> const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__materialConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialConfig;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__materialConfig(::UnityW<::GlobalNamespace::AudioMaterialConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialConfig = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AudioOcclusion::__cordl_internal_get__RandomPointTowardsSource_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomPointTowardsSource_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__RandomPointTowardsSource_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomPointTowardsSource_k__BackingField;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__RandomPointTowardsSource_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RandomPointTowardsSource_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusion::__cordl_internal_get__OccLvl_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OccLvl_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__OccLvl_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OccLvl_k__BackingField;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__OccLvl_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OccLvl_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusion::__cordl_internal_get__VoiceBlockingLvl_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoiceBlockingLvl_k__BackingField;
}
constexpr float_t const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__VoiceBlockingLvl_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoiceBlockingLvl_k__BackingField;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__VoiceBlockingLvl_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VoiceBlockingLvl_k__BackingField = value;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue*& GlobalNamespace::AudioOcclusion::__cordl_internal_get__voiceBlockingInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceBlockingInfo;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__voiceBlockingInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceBlockingInfo;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__voiceBlockingInfo(::GlobalNamespace::FixedSizeFloatQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceBlockingInfo = value;
}
constexpr float_t& GlobalNamespace::AudioOcclusion::__cordl_internal_get__voiceBlockingAvg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceBlockingAvg;
}
constexpr float_t const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__voiceBlockingAvg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceBlockingAvg;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__voiceBlockingAvg(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceBlockingAvg = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*& GlobalNamespace::AudioOcclusion::__cordl_internal_get__voiceBlockingMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceBlockingMaterials;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>* const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__voiceBlockingMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceBlockingMaterials;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__voiceBlockingMaterials(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceBlockingMaterials = value;
}
constexpr bool& GlobalNamespace::AudioOcclusion::__cordl_internal_get__isAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAsync;
}
constexpr bool const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__isAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAsync;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__isAsync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isAsync = value;
}
constexpr bool& GlobalNamespace::AudioOcclusion::__cordl_internal_get__waitingForAsyncResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingForAsyncResults;
}
constexpr bool const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__waitingForAsyncResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingForAsyncResults;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__waitingForAsyncResults(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waitingForAsyncResults = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*& GlobalNamespace::AudioOcclusion::__cordl_internal_get__raycastRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastRequests;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>* const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__raycastRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastRequests;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__raycastRequests(::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastRequests = value;
}
constexpr int32_t& GlobalNamespace::AudioOcclusion::__cordl_internal_get__currentRaycastIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRaycastIndex;
}
constexpr int32_t const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__currentRaycastIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRaycastIndex;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__currentRaycastIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentRaycastIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo>*& GlobalNamespace::AudioOcclusion::__cordl_internal_get__skippedRaycasts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skippedRaycasts;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo>* const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__skippedRaycasts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skippedRaycasts;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__skippedRaycasts(::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skippedRaycasts = value;
}
constexpr int32_t& GlobalNamespace::AudioOcclusion::__cordl_internal_get__currentSkippedDirectionIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSkippedDirectionIndex;
}
constexpr int32_t const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__currentSkippedDirectionIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSkippedDirectionIndex;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__currentSkippedDirectionIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSkippedDirectionIndex = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AudioOcclusion::__cordl_internal_get__currentHeadPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentHeadPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__currentHeadPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentHeadPosition;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__currentHeadPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentHeadPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AudioOcclusion::__cordl_internal_get__currentSourcePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSourcePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__currentSourcePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSourcePosition;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__currentSourcePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSourcePosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AudioOcclusion::__cordl_internal_get__currentDirectDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDirectDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__currentDirectDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDirectDirection;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__currentDirectDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDirectDirection = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& GlobalNamespace::AudioOcclusion::__cordl_internal_get__asyncResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncResults;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__asyncResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncResults;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__asyncResults(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asyncResults = value;
}
constexpr int32_t& GlobalNamespace::AudioOcclusion::__cordl_internal_get__asyncResultsOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncResultsOffset;
}
constexpr int32_t const& GlobalNamespace::AudioOcclusion::__cordl_internal_get__asyncResultsOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncResultsOffset;
}
constexpr void GlobalNamespace::AudioOcclusion::__cordl_internal_set__asyncResultsOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asyncResultsOffset = value;
}
inline ::UnityEngine::LayerMask GlobalNamespace::AudioOcclusion::get_Layer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"get_Layer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline ::UnityEngine::QueryTriggerInteraction GlobalNamespace::AudioOcclusion::get_DetectTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"get_DetectTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryTriggerInteraction>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioOcclusion::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioOcclusion::get_OutOfRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"get_OutOfRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioOcclusion::get_RandomPointTowardsSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"get_RandomPointTowardsSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusion::set_RandomPointTowardsSource(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"set_RandomPointTowardsSource", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioOcclusion::get_OccLvl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusion::set_OccLvl(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioOcclusion::get_VoiceBlockingLvl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusion::set_VoiceBlockingLvl(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioOcclusion::UpdateOcclusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusion::Initialize(::GlobalNamespace::AudioOcclusionConfig*  config)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void GlobalNamespace::AudioOcclusion::PrepareRaycasts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"PrepareRaycasts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusion::CalculateOcclusion(bool  forceSync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"CalculateOcclusion", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceSync);
}
inline void GlobalNamespace::AudioOcclusion::ProcessRaycasts(bool  isSync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"ProcessRaycasts", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSync);
}
inline int32_t GlobalNamespace::AudioOcclusion::ProcessNextRaycast(::ArrayW<::UnityEngine::RaycastHit>  hits, bool  isSync, ::by_ref<::GlobalNamespace::AudioOcclusion_RaycastRequest>  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"ProcessNextRaycast", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AudioOcclusion_RaycastRequest>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hits, isSync, request);
}
inline ::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo GlobalNamespace::AudioOcclusion::GetNextSkippedInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"GetNextSkippedInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo>(this, ___internal_method);
}
inline void GlobalNamespace::AudioOcclusion::ApplyAsyncRaycastResults(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  results, int32_t  startOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"ApplyAsyncRaycastResults", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results, startOffset);
}
inline void GlobalNamespace::AudioOcclusion::SetAsync(bool  isAsync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"SetAsync", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isAsync);
}
inline void GlobalNamespace::AudioOcclusion::UpdateOcclusionValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"UpdateOcclusionValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioOcclusion_ResultData GlobalNamespace::AudioOcclusion::ProcessHit(::UnityEngine::RaycastHit  hit, ::GlobalNamespace::AudioOcclusion_ResultData  resultData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"ProcessHit", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::GlobalNamespace::AudioOcclusion_ResultData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioOcclusion_ResultData>(this, ___internal_method, hit, resultData);
}
inline int32_t GlobalNamespace::AudioOcclusion::CountBlockingHits(::ArrayW<::UnityEngine::RaycastHit>  hits, int32_t  hitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"CountBlockingHits", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hits, hitCount);
}
inline bool GlobalNamespace::AudioOcclusion::HasVoiceBlockingMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"HasVoiceBlockingMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioOcclusion::ShouldCheckIgnore(::UnityEngine::Vector3  dir_AroundPlayer, ::UnityEngine::Vector3  dir_Direct, ::UnityEngine::Vector3  dir_AroundSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {"ShouldCheckIgnore", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dir_AroundPlayer, dir_Direct, dir_AroundSource);
}
inline void GlobalNamespace::AudioOcclusion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioOcclusion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioOcclusion* GlobalNamespace::AudioOcclusion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioOcclusion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioOcclusion::AudioOcclusion()   {
}
