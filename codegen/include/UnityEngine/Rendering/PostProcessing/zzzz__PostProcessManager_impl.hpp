#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessAttribute_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessLayer_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessManager_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessVolume_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager___c::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c._ReloadBaseTypes_b__12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::PostProcessManager___c::*)(::System::Type*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager___c::_ReloadBaseTypes_b__12_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fd04b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*>(),
                        {"<ReloadBaseTypes>b__12_0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager___c::setStaticF___9(::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*, "<>9", ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*>(std::forward<::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*>(value));
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c* UnityEngine::Rendering::PostProcessing::PostProcessManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*, "<>9", ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*>();
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager___c::setStaticF___9__12_0(::System::Func_2<::System::Type*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Type*,bool>*, "<>9__12_0", ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*>(std::forward<::System::Func_2<::System::Type*,bool>*>(value));
}
inline ::System::Func_2<::System::Type*,bool>* UnityEngine::Rendering::PostProcessing::PostProcessManager___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*,bool>*, "<>9__12_0", ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*>();
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessManager___c::_ReloadBaseTypes_b__12_0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*>(),
                        {"<ReloadBaseTypes>b__12_0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c* UnityEngine::Rendering::PostProcessing::PostProcessManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessManager___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessManager___c::PostProcessManager___c()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PostProcessManager* (*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::get_instance)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181fc9da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181fc9c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.CleanBaseTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::CleanBaseTypes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181fc8230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"CleanBaseTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.ReloadBaseTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::ReloadBaseTypes)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x181fc8f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"ReloadBaseTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.GetActiveVolumes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*, bool, bool)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::GetActiveVolumes)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x181fc8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"GetActiveVolumes", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.GetHighestPriorityVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume> (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::GetHighestPriorityVolume)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181fc86b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"GetHighestPriorityVolume", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.GetHighestPriorityVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume> (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(::UnityEngine::LayerMask)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::GetHighestPriorityVolume)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181fc87c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"GetHighestPriorityVolume", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.QuickVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume> (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::QuickVolume)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181fc8b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"QuickVolume", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.SetLayerDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::SetLayerDirty)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181fc9430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"SetLayerDirty", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.UpdateVolumeLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*, int32_t, int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::UpdateVolumeLayer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fc9c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"UpdateVolumeLayer", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*, int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::Register)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181fc8da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"Register", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::Register)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fc8ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"Register", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*, int32_t)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::Unregister)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181fc9620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::Unregister)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fc95d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.ReplaceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::ReplaceData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181fc9300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"ReplaceData", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.UpdateSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::UpdateSettings)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x181fc96e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"UpdateSettings", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.GrabVolumes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>* (::UnityEngine::Rendering::PostProcessing::PostProcessManager::*)(::UnityEngine::LayerMask)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::GrabVolumes)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181fc8890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"GrabVolumes", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.SortByPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::SortByPriority)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fc94e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"SortByPriority", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessManager.IsVolumeRenderedByCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::PostProcessing::PostProcessManager::IsVolumeRenderedByCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"IsVolumeRenderedByCamera", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>*& UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_get_m_SortedVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortedVolumes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>* const& UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_get_m_SortedVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortedVolumes;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_set_m_SortedVolumes(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SortedVolumes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*& UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_get_m_Volumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Volumes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>* const& UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_get_m_Volumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Volumes;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_set_m_Volumes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Volumes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>*& UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_get_m_SortNeeded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortNeeded;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>* const& UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_get_m_SortNeeded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortNeeded;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_set_m_SortNeeded(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SortNeeded = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*& UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_get_m_BaseSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BaseSettings;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>* const& UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_get_m_BaseSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BaseSettings;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_set_m_BaseSettings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BaseSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_get_m_TempColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TempColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_get_m_TempColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TempColliders;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_set_m_TempColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TempColliders = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>*& UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_get_settingsTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsTypes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>* const& UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_get_settingsTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsTypes;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessManager::__cordl_internal_set_settingsTypes(::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsTypes = value;
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::setStaticF_s_Instance(::UnityEngine::Rendering::PostProcessing::PostProcessManager*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::PostProcessing::PostProcessManager*, "s_Instance", ::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(std::forward<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(value));
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessManager* UnityEngine::Rendering::PostProcessing::PostProcessManager::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::PostProcessing::PostProcessManager*, "s_Instance", ::UnityEngine::Rendering::PostProcessing::PostProcessManager*>();
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessManager* UnityEngine::Rendering::PostProcessing::PostProcessManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::CleanBaseTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"CleanBaseTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::ReloadBaseTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"ReloadBaseTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::GetActiveVolumes(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*  layer, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*  results, bool  skipDisabled, bool  skipZeroWeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"GetActiveVolumes", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layer, results, skipDisabled, skipZeroWeight);
}
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume> UnityEngine::Rendering::PostProcessing::PostProcessManager::GetHighestPriorityVolume(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"GetHighestPriorityVolume", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>(this, ___internal_method, layer);
}
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume> UnityEngine::Rendering::PostProcessing::PostProcessManager::GetHighestPriorityVolume(::UnityEngine::LayerMask  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"GetHighestPriorityVolume", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>(this, ___internal_method, mask);
}
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume> UnityEngine::Rendering::PostProcessing::PostProcessManager::QuickVolume(int32_t  layer, float_t  priority, ::ArrayW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"QuickVolume", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>(this, ___internal_method, layer, priority, settings);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::SetLayerDirty(int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"SetLayerDirty", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layer);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::UpdateVolumeLayer(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume, int32_t  prevLayer, int32_t  newLayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"UpdateVolumeLayer", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume, prevLayer, newLayer);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::Register(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"Register", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume, layer);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::Register(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"Register", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::Unregister(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume, layer);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::Unregister(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::ReplaceData(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*  postProcessLayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"ReplaceData", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, postProcessLayer);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::UpdateSettings(::UnityEngine::Rendering::PostProcessing::PostProcessLayer*  postProcessLayer, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"UpdateSettings", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessLayer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, postProcessLayer, camera);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>* UnityEngine::Rendering::PostProcessing::PostProcessManager::GrabVolumes(::UnityEngine::LayerMask  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"GrabVolumes", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>(this, ___internal_method, mask);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessManager::SortByPriority(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*  volumes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"SortByPriority", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessVolume>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, volumes);
}
inline bool UnityEngine::Rendering::PostProcessing::PostProcessManager::IsVolumeRenderedByCamera(::UnityEngine::Rendering::PostProcessing::PostProcessVolume*  volume, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>(),
                        {"IsVolumeRenderedByCamera", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessVolume*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, volume, camera);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessManager* UnityEngine::Rendering::PostProcessing::PostProcessManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessManager::PostProcessManager()   {
}
