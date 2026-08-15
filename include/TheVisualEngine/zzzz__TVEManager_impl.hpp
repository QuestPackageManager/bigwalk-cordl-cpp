#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEManager.hpp"
#include "Boxophobic/StyledGUI/zzzz__StyledMonoBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEElementsOrdering_impl.hpp"
#include "TheVisualEngine/zzzz__TVEElementsVisibility_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "TheVisualEngine/zzzz__TVEManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "TheVisualEngine/zzzz__TVEElementBufferData_def.hpp"
#include "TheVisualEngine/zzzz__TVEElementRendererData_def.hpp"
#include "TheVisualEngine/zzzz__TVEElement_def.hpp"
#include "TheVisualEngine/zzzz__TVEGlobalAtmoData_def.hpp"
#include "TheVisualEngine/zzzz__TVEGlobalCoatData_def.hpp"
#include "TheVisualEngine/zzzz__TVEGlobalFormData_def.hpp"
#include "TheVisualEngine/zzzz__TVEGlobalGlowData_def.hpp"
#include "TheVisualEngine/zzzz__TVEGlobalPaintData_def.hpp"
#include "TheVisualEngine/zzzz__TVEInstanced_def.hpp"
#include "TheVisualEngine/zzzz__TVEManager_def.hpp"
#include "TheVisualEngine/zzzz__TVETerrain_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager___c::*)()>(&::TheVisualEngine::TVEManager___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager___c._SortElementObjects_b__46_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::TheVisualEngine::TVEManager___c::*)(::TheVisualEngine::TVEElement*, ::TheVisualEngine::TVEElement*)>(&::TheVisualEngine::TVEManager___c::_SortElementObjects_b__46_0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804b8fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager___c*>(),
                        {"<SortElementObjects>b__46_0", {}, {::i2c::type_of<::TheVisualEngine::TVEElement*>(), ::i2c::type_of<::TheVisualEngine::TVEElement*>()}}
                    )));
    return ___internal_method;
  }
};
inline void TheVisualEngine::TVEManager___c::setStaticF___9(::TheVisualEngine::TVEManager___c*  value)  {
::cordl_internals::setStaticField<::TheVisualEngine::TVEManager___c*, "<>9", ::TheVisualEngine::TVEManager___c*>(std::forward<::TheVisualEngine::TVEManager___c*>(value));
}
inline ::TheVisualEngine::TVEManager___c* TheVisualEngine::TVEManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::TheVisualEngine::TVEManager___c*, "<>9", ::TheVisualEngine::TVEManager___c*>();
}
inline void TheVisualEngine::TVEManager___c::setStaticF___9__46_0(::System::Comparison_1<::UnityW<::TheVisualEngine::TVEElement>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::TheVisualEngine::TVEElement>>*, "<>9__46_0", ::TheVisualEngine::TVEManager___c*>(std::forward<::System::Comparison_1<::UnityW<::TheVisualEngine::TVEElement>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::TheVisualEngine::TVEElement>>* TheVisualEngine::TVEManager___c::getStaticF___9__46_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::TheVisualEngine::TVEElement>>*, "<>9__46_0", ::TheVisualEngine::TVEManager___c*>();
}
inline void TheVisualEngine::TVEManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t TheVisualEngine::TVEManager___c::_SortElementObjects_b__46_0(::TheVisualEngine::TVEElement*  e1, ::TheVisualEngine::TVEElement*  e2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager___c*>(),
                        {"<SortElementObjects>b__46_0", {}, {::i2c::type_of<::TheVisualEngine::TVEElement*>(), ::i2c::type_of<::TheVisualEngine::TVEElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, e1, e2);
}
inline ::TheVisualEngine::TVEManager___c* TheVisualEngine::TVEManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEManager___c*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEManager___c::TVEManager___c()   {
}
//  Writing Method size for method: ::TheVisualEngine::TVEManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::OnEnable)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1804aac60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804aac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804aac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::Update)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804ac530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::LateUpdate)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804aaa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.EnableManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::EnableManager)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1804aa140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"EnableManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.DisableManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::DisableManager)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1804a9ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"DisableManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.SetGlobalShaderProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::SetGlobalShaderProperties)> {
  constexpr static std::size_t size = 0xa10;
  constexpr static std::size_t addrs = 0x1804ab220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"SetGlobalShaderProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.InitElementsRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::InitElementsRendering)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804aa960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"InitElementsRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.DisableElementsRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::DisableElementsRendering)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1804a9c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"DisableElementsRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.CreateRenderData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)(::StringW)>(&::TheVisualEngine::TVEManager::CreateRenderData)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1804a9860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"CreateRenderData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.CreateRenderBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)(::TheVisualEngine::TVEElementBufferData*)>(&::TheVisualEngine::TVEManager::CreateRenderBuffer)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x1804a91d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"CreateRenderBuffer", {}, {::i2c::type_of<::TheVisualEngine::TVEElementBufferData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.SubmitRenderBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::SubmitRenderBuffers)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x1804abd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"SubmitRenderBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.ExecuteRenderBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)(bool)>(&::TheVisualEngine::TVEManager::ExecuteRenderBuffers)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x1804aa250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"ExecuteRenderBuffers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.DestroyRenderBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::DestroyRenderBuffers)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804a9aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"DestroyRenderBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.GetVolumeCoords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::TheVisualEngine::TVEManager::*)(::TheVisualEngine::TVEElementBufferData*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, bool)>(&::TheVisualEngine::TVEManager::GetVolumeCoords)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1804aa720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"GetVolumeCoords", {}, {::i2c::type_of<::TheVisualEngine::TVEElementBufferData*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.MarkSortDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::MarkSortDirty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804aac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"MarkSortDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.SortElementObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::SortElementObjects)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804abc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"SortElementObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.SetElementsRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)(::StringW, bool)>(&::TheVisualEngine::TVEManager::SetElementsRendering)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804ab040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"SetElementsRendering", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.SetElementsVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::SetElementsVisibility)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ab110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"SetElementsVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.EnableElementsVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::EnableElementsVisibility)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804aa090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"EnableElementsVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.DisableElementsVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::DisableElementsVisibility)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804a9e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"DisableElementsVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager.SetGlobalLightingMainLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::SetGlobalLightingMainLight)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804ab170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"SetGlobalLightingMainLight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEManager::*)()>(&::TheVisualEngine::TVEManager::_ctor)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1804ac630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& TheVisualEngine::TVEManager::__cordl_internal_get_motionControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionControl;
}
constexpr float_t const& TheVisualEngine::TVEManager::__cordl_internal_get_motionControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionControl;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_motionControl(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motionControl = value;
}
constexpr float_t& TheVisualEngine::TVEManager::__cordl_internal_get_seasonControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonControl;
}
constexpr float_t const& TheVisualEngine::TVEManager::__cordl_internal_get_seasonControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonControl;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_seasonControl(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seasonControl = value;
}
constexpr bool& TheVisualEngine::TVEManager::__cordl_internal_get_styledCameraMessaage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___styledCameraMessaage;
}
constexpr bool const& TheVisualEngine::TVEManager::__cordl_internal_get_styledCameraMessaage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___styledCameraMessaage;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_styledCameraMessaage(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___styledCameraMessaage = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& TheVisualEngine::TVEManager::__cordl_internal_get_mainCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& TheVisualEngine::TVEManager::__cordl_internal_get_mainCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainCamera = value;
}
constexpr ::UnityW<::UnityEngine::Light>& TheVisualEngine::TVEManager::__cordl_internal_get_mainLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& TheVisualEngine::TVEManager::__cordl_internal_get_mainLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainLight;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_mainLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainLight = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& TheVisualEngine::TVEManager::__cordl_internal_get_mainWind()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainWind;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& TheVisualEngine::TVEManager::__cordl_internal_get_mainWind() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainWind;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_mainWind(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainWind = value;
}
constexpr bool& TheVisualEngine::TVEManager::__cordl_internal_get_autoAssingMainObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoAssingMainObjects;
}
constexpr bool const& TheVisualEngine::TVEManager::__cordl_internal_get_autoAssingMainObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoAssingMainObjects;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_autoAssingMainObjects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoAssingMainObjects = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& TheVisualEngine::TVEManager::__cordl_internal_get_playerObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& TheVisualEngine::TVEManager::__cordl_internal_get_playerObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerObject;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_playerObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerObject = value;
}
constexpr float_t& TheVisualEngine::TVEManager::__cordl_internal_get_playerRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRadius;
}
constexpr float_t const& TheVisualEngine::TVEManager::__cordl_internal_get_playerRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRadius;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_playerRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerRadius = value;
}
constexpr ::TheVisualEngine::TVEGlobalCoatData*& TheVisualEngine::TVEManager::__cordl_internal_get_globalCoatData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalCoatData;
}
constexpr ::TheVisualEngine::TVEGlobalCoatData* const& TheVisualEngine::TVEManager::__cordl_internal_get_globalCoatData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalCoatData;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_globalCoatData(::TheVisualEngine::TVEGlobalCoatData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalCoatData = value;
}
constexpr ::TheVisualEngine::TVEGlobalPaintData*& TheVisualEngine::TVEManager::__cordl_internal_get_globalPaintData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalPaintData;
}
constexpr ::TheVisualEngine::TVEGlobalPaintData* const& TheVisualEngine::TVEManager::__cordl_internal_get_globalPaintData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalPaintData;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_globalPaintData(::TheVisualEngine::TVEGlobalPaintData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalPaintData = value;
}
constexpr ::TheVisualEngine::TVEGlobalAtmoData*& TheVisualEngine::TVEManager::__cordl_internal_get_globalAtmoData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalAtmoData;
}
constexpr ::TheVisualEngine::TVEGlobalAtmoData* const& TheVisualEngine::TVEManager::__cordl_internal_get_globalAtmoData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalAtmoData;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_globalAtmoData(::TheVisualEngine::TVEGlobalAtmoData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalAtmoData = value;
}
constexpr ::TheVisualEngine::TVEGlobalGlowData*& TheVisualEngine::TVEManager::__cordl_internal_get_globalGlowData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalGlowData;
}
constexpr ::TheVisualEngine::TVEGlobalGlowData* const& TheVisualEngine::TVEManager::__cordl_internal_get_globalGlowData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalGlowData;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_globalGlowData(::TheVisualEngine::TVEGlobalGlowData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalGlowData = value;
}
constexpr ::TheVisualEngine::TVEGlobalFormData*& TheVisualEngine::TVEManager::__cordl_internal_get_globalFormData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalFormData;
}
constexpr ::TheVisualEngine::TVEGlobalFormData* const& TheVisualEngine::TVEManager::__cordl_internal_get_globalFormData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalFormData;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_globalFormData(::TheVisualEngine::TVEGlobalFormData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalFormData = value;
}
constexpr ::TheVisualEngine::TVEElementsVisibility& TheVisualEngine::TVEManager::__cordl_internal_get_elementVisibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementVisibility;
}
constexpr ::TheVisualEngine::TVEElementsVisibility const& TheVisualEngine::TVEManager::__cordl_internal_get_elementVisibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementVisibility;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_elementVisibility(::TheVisualEngine::TVEElementsVisibility  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementVisibility = value;
}
constexpr ::TheVisualEngine::TVEElementsVisibility& TheVisualEngine::TVEManager::__cordl_internal_get_elementVisibilityOld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementVisibilityOld;
}
constexpr ::TheVisualEngine::TVEElementsVisibility const& TheVisualEngine::TVEManager::__cordl_internal_get_elementVisibilityOld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementVisibilityOld;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_elementVisibilityOld(::TheVisualEngine::TVEElementsVisibility  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementVisibilityOld = value;
}
constexpr ::TheVisualEngine::TVEElementsOrdering& TheVisualEngine::TVEManager::__cordl_internal_get_elementOrdering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementOrdering;
}
constexpr ::TheVisualEngine::TVEElementsOrdering const& TheVisualEngine::TVEManager::__cordl_internal_get_elementOrdering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementOrdering;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_elementOrdering(::TheVisualEngine::TVEElementsOrdering  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementOrdering = value;
}
constexpr ::TheVisualEngine::TVEElementRendererData*& TheVisualEngine::TVEManager::__cordl_internal_get_elementRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementRenderer;
}
constexpr ::TheVisualEngine::TVEElementRendererData* const& TheVisualEngine::TVEManager::__cordl_internal_get_elementRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementRenderer;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_elementRenderer(::TheVisualEngine::TVEElementRendererData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementRenderer = value;
}
constexpr bool& TheVisualEngine::TVEManager::__cordl_internal_get_useShaderMetaSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useShaderMetaSettings;
}
constexpr bool const& TheVisualEngine::TVEManager::__cordl_internal_get_useShaderMetaSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useShaderMetaSettings;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_useShaderMetaSettings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useShaderMetaSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementBufferData*>*& TheVisualEngine::TVEManager::__cordl_internal_get_renderDataSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderDataSet;
}
constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementBufferData*>* const& TheVisualEngine::TVEManager::__cordl_internal_get_renderDataSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderDataSet;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_renderDataSet(::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementBufferData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderDataSet = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>*& TheVisualEngine::TVEManager::__cordl_internal_get_renderElements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderElements;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>* const& TheVisualEngine::TVEManager::__cordl_internal_get_renderElements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderElements;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_renderElements(::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderElements = value;
}
constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEInstanced*>*& TheVisualEngine::TVEManager::__cordl_internal_get_renderInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderInstances;
}
constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEInstanced*>* const& TheVisualEngine::TVEManager::__cordl_internal_get_renderInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderInstances;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_renderInstances(::System::Collections::Generic::List_1<::TheVisualEngine::TVEInstanced*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderInstances = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVETerrain>>*& TheVisualEngine::TVEManager::__cordl_internal_get_sceneTerrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneTerrains;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVETerrain>>* const& TheVisualEngine::TVEManager::__cordl_internal_get_sceneTerrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneTerrains;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_sceneTerrains(::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVETerrain>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneTerrains = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& TheVisualEngine::TVEManager::__cordl_internal_get_focusTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& TheVisualEngine::TVEManager::__cordl_internal_get_focusTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusTransform;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_focusTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focusTransform = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& TheVisualEngine::TVEManager::__cordl_internal_get_propertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& TheVisualEngine::TVEManager::__cordl_internal_get_propertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlock;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_propertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlock = value;
}
constexpr ::UnityEngine::Matrix4x4& TheVisualEngine::TVEManager::__cordl_internal_get_projectionMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectionMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& TheVisualEngine::TVEManager::__cordl_internal_get_projectionMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectionMatrix;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_projectionMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectionMatrix = value;
}
constexpr ::UnityEngine::Matrix4x4& TheVisualEngine::TVEManager::__cordl_internal_get_modelViewMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelViewMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& TheVisualEngine::TVEManager::__cordl_internal_get_modelViewMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modelViewMatrix;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_modelViewMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modelViewMatrix = value;
}
constexpr bool& TheVisualEngine::TVEManager::__cordl_internal_get_sortDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortDirty;
}
constexpr bool const& TheVisualEngine::TVEManager::__cordl_internal_get_sortDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortDirty;
}
constexpr void TheVisualEngine::TVEManager::__cordl_internal_set_sortDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortDirty = value;
}
inline void TheVisualEngine::TVEManager::setStaticF_Instance(::UnityW<::TheVisualEngine::TVEManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::TheVisualEngine::TVEManager>, "Instance", ::TheVisualEngine::TVEManager*>(std::forward<::UnityW<::TheVisualEngine::TVEManager>>(value));
}
inline ::UnityW<::TheVisualEngine::TVEManager> TheVisualEngine::TVEManager::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::TheVisualEngine::TVEManager>, "Instance", ::TheVisualEngine::TVEManager*>();
}
inline void TheVisualEngine::TVEManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::EnableManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"EnableManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::DisableManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"DisableManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::SetGlobalShaderProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"SetGlobalShaderProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::InitElementsRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"InitElementsRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::DisableElementsRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"DisableElementsRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::CreateRenderData(::StringW  renderName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"CreateRenderData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderName);
}
inline void TheVisualEngine::TVEManager::CreateRenderBuffer(::TheVisualEngine::TVEElementBufferData*  renderData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"CreateRenderBuffer", {}, {::i2c::type_of<::TheVisualEngine::TVEElementBufferData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderData);
}
inline void TheVisualEngine::TVEManager::SubmitRenderBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"SubmitRenderBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::ExecuteRenderBuffers(bool  isBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"ExecuteRenderBuffers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isBase);
}
inline void TheVisualEngine::TVEManager::DestroyRenderBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"DestroyRenderBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 TheVisualEngine::TVEManager::GetVolumeCoords(::TheVisualEngine::TVEElementBufferData*  renderData, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  scale, bool  isBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"GetVolumeCoords", {}, {::i2c::type_of<::TheVisualEngine::TVEElementBufferData*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, renderData, position, scale, isBase);
}
inline void TheVisualEngine::TVEManager::MarkSortDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"MarkSortDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::SortElementObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"SortElementObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::SetElementsRendering(::StringW  renderName, bool  isRendering)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"SetElementsRendering", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderName, isRendering);
}
inline void TheVisualEngine::TVEManager::SetElementsVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"SetElementsVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::EnableElementsVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"EnableElementsVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::DisableElementsVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"DisableElementsVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::SetGlobalLightingMainLight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {"SetGlobalLightingMainLight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TheVisualEngine::TVEManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEManager* TheVisualEngine::TVEManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEManager*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEManager::TVEManager()   {
}
