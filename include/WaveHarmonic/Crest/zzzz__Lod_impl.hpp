#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Lod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__Versioned_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Cascade_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LodTextureFormatMode_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__BufferedData_1_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Cascade_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryable_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodTextureFormatMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
inline void WaveHarmonic::Crest::Lod_ShaderIDs::setStaticF_s_LodIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_LodIndex", ::WaveHarmonic::Crest::Lod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::Lod_ShaderIDs::getStaticF_s_LodIndex()  {
return ::cordl_internals::getStaticField<int32_t, "s_LodIndex", ::WaveHarmonic::Crest::Lod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::Lod_ShaderIDs::setStaticF_s_LodChange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_LodChange", ::WaveHarmonic::Crest::Lod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::Lod_ShaderIDs::getStaticF_s_LodChange()  {
return ::cordl_internals::getStaticField<int32_t, "s_LodChange", ::WaveHarmonic::Crest::Lod_ShaderIDs*>();
}
inline void WaveHarmonic::Crest::Lod_ShaderIDs::setStaticF_s_TemporaryBlurLodTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_TemporaryBlurLodTexture", ::WaveHarmonic::Crest::Lod_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::Lod_ShaderIDs::getStaticF_s_TemporaryBlurLodTexture()  {
return ::cordl_internals::getStaticField<int32_t, "s_TemporaryBlurLodTexture", ::WaveHarmonic::Crest::Lod_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Lod_ShaderIDs::Lod_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod___c::*)()>(&::WaveHarmonic::Crest::Lod___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod___c._SetGlobals_b__84_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::WaveHarmonic::Crest::Lod___c::*)()>(&::WaveHarmonic::Crest::Lod___c::_SetGlobals_b__84_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182580460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod___c*>(),
                        {"<SetGlobals>b__84_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod___c._SetGlobals_b__84_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod___c::*)(::ArrayW<::UnityEngine::Vector4>)>(&::WaveHarmonic::Crest::Lod___c::_SetGlobals_b__84_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182580480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod___c*>(),
                        {"<SetGlobals>b__84_1", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod___c._LoadCameraData_b__97_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::WaveHarmonic::Crest::Lod___c::*)()>(&::WaveHarmonic::Crest::Lod___c::_LoadCameraData_b__97_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182580460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod___c*>(),
                        {"<LoadCameraData>b__97_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Lod___c::setStaticF___9(::WaveHarmonic::Crest::Lod___c*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::Lod___c*, "<>9", ::WaveHarmonic::Crest::Lod___c*>(std::forward<::WaveHarmonic::Crest::Lod___c*>(value));
}
inline ::WaveHarmonic::Crest::Lod___c* WaveHarmonic::Crest::Lod___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::Lod___c*, "<>9", ::WaveHarmonic::Crest::Lod___c*>();
}
inline void WaveHarmonic::Crest::Lod___c::setStaticF___9__84_0(::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*, "<>9__84_0", ::WaveHarmonic::Crest::Lod___c*>(std::forward<::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*>(value));
}
inline ::System::Func_1<::ArrayW<::UnityEngine::Vector4>>* WaveHarmonic::Crest::Lod___c::getStaticF___9__84_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*, "<>9__84_0", ::WaveHarmonic::Crest::Lod___c*>();
}
inline void WaveHarmonic::Crest::Lod___c::setStaticF___9__84_1(::System::Action_1<::ArrayW<::UnityEngine::Vector4>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::ArrayW<::UnityEngine::Vector4>>*, "<>9__84_1", ::WaveHarmonic::Crest::Lod___c*>(std::forward<::System::Action_1<::ArrayW<::UnityEngine::Vector4>>*>(value));
}
inline ::System::Action_1<::ArrayW<::UnityEngine::Vector4>>* WaveHarmonic::Crest::Lod___c::getStaticF___9__84_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::ArrayW<::UnityEngine::Vector4>>*, "<>9__84_1", ::WaveHarmonic::Crest::Lod___c*>();
}
inline void WaveHarmonic::Crest::Lod___c::setStaticF___9__97_0(::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*, "<>9__97_0", ::WaveHarmonic::Crest::Lod___c*>(std::forward<::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*>(value));
}
inline ::System::Func_1<::ArrayW<::UnityEngine::Vector4>>* WaveHarmonic::Crest::Lod___c::getStaticF___9__97_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*, "<>9__97_0", ::WaveHarmonic::Crest::Lod___c*>();
}
inline void WaveHarmonic::Crest::Lod___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector4> WaveHarmonic::Crest::Lod___c::_SetGlobals_b__84_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod___c*>(),
                        {"<SetGlobals>b__84_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod___c::_SetGlobals_b__84_1(::ArrayW<::UnityEngine::Vector4>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod___c*>(),
                        {"<SetGlobals>b__84_1", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::ArrayW<::UnityEngine::Vector4> WaveHarmonic::Crest::Lod___c::_LoadCameraData_b__97_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod___c*>(),
                        {"<LoadCameraData>b__97_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Lod___c* WaveHarmonic::Crest::Lod___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Lod___c*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Lod___c::Lod___c()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod___c__DisplayClass75_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod___c__DisplayClass75_0::*)()>(&::WaveHarmonic::Crest::Lod___c__DisplayClass75_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod___c__DisplayClass75_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod___c__DisplayClass75_0._SetOrigin_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod___c__DisplayClass75_0::*)(::ArrayW<::UnityEngine::Vector4>)>(&::WaveHarmonic::Crest::Lod___c__DisplayClass75_0::_SetOrigin_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825804b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod___c__DisplayClass75_0*>(),
                        {"<SetOrigin>b__0", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::Lod___c__DisplayClass75_0::__cordl_internal_get_newOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newOrigin;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::Lod___c__DisplayClass75_0::__cordl_internal_get_newOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newOrigin;
}
constexpr void WaveHarmonic::Crest::Lod___c__DisplayClass75_0::__cordl_internal_set_newOrigin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newOrigin = value;
}
constexpr ::WaveHarmonic::Crest::Lod*& WaveHarmonic::Crest::Lod___c__DisplayClass75_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::WaveHarmonic::Crest::Lod* const& WaveHarmonic::Crest::Lod___c__DisplayClass75_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void WaveHarmonic::Crest::Lod___c__DisplayClass75_0::__cordl_internal_set___4__this(::WaveHarmonic::Crest::Lod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void WaveHarmonic::Crest::Lod___c__DisplayClass75_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod___c__DisplayClass75_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod___c__DisplayClass75_0::_SetOrigin_b__0(::ArrayW<::UnityEngine::Vector4>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod___c__DisplayClass75_0*>(),
                        {"<SetOrigin>b__0", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::WaveHarmonic::Crest::Lod___c__DisplayClass75_0* WaveHarmonic::Crest::Lod___c__DisplayClass75_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Lod___c__DisplayClass75_0*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Lod___c__DisplayClass75_0::Lod___c__DisplayClass75_0()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_ID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_Name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181163ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_RequestedTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_RequestedTextureFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_CompatibleTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_CompatibleTextureFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_CompatibleTextureFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.set_CompatibleTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::WaveHarmonic::Crest::Lod::set_CompatibleTextureFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_CompatibleTextureFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_ClearColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_ClearColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_NeedToReadWriteTextureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_NeedToReadWriteTextureData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_Inputs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_GizmoColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_BufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_BufferCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_NullTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2DArray> (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_NullTexture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825785e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_RequiresClearBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_RequiresClearBorder)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_Queryable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IQueryable* (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_Queryable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Queryable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.set_Queryable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::WaveHarmonic::Crest::IQueryable*)>(&::WaveHarmonic::Crest::Lod::set_Queryable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_Queryable", {}, {::i2c::type_of<::WaveHarmonic::Crest::IQueryable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_Persistent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_Persistent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182578660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Persistent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_SkipEndOfFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_SkipEndOfFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_DataTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_DataTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_DataTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_Cascades
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::WaveHarmonic::Crest::Cascade> (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_Cascades)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Cascades", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_Slices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_Slices)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825786e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Slices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_Water
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::WaveHarmonic::Crest::WaterRenderer> (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_Water)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Water", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1825783e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.CreateLodDataTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::WaveHarmonic::Crest::Lod::*)(::StringW)>(&::WaveHarmonic::Crest::Lod::CreateLodDataTextures)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1825764e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"CreateLodDataTextures", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.FlipBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::Lod::FlipBuffers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825766d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"FlipBuffers", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::RenderTexture*)>(&::WaveHarmonic::Crest::Lod::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182576490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"Clear", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_AlwaysClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_AlwaysClear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.BuildCommandBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::WaveHarmonic::Crest::WaterRenderer*, ::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::Lod::BuildCommandBuffer)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x182575c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.SubmitDraws
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Rendering::CommandBuffer*, ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, bool)>(&::WaveHarmonic::Crest::Lod::SubmitDraws)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x1825770f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SubmitDraws", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.SetOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Vector3)>(&::WaveHarmonic::Crest::Lod::SetOrigin)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182577050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SetOrigin", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.ClearBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::Lod::ClearBorder)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x182576100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"ClearBorder", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.UpdateSamplingParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Rendering::CommandBuffer*, bool)>(&::WaveHarmonic::Crest::Lod::UpdateSamplingParameters)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x182577f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"UpdateSamplingParameters", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.SuggestIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Rect)>(&::WaveHarmonic::Crest::Lod::SuggestIndex)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1825779c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SuggestIndex", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.SuggestIndexForWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Rect)>(&::WaveHarmonic::Crest::Lod::SuggestIndexForWaves)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182577990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SuggestIndexForWaves", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.SuggestIndexForWaves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Rect, float_t)>(&::WaveHarmonic::Crest::Lod::SuggestIndexForWaves)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x182577740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SuggestIndexForWaves", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.TryBlur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::WaveHarmonic::Crest::Lod::TryBlur)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x182577b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"TryBlur", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::Initialize)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x182576770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.SetGlobals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(bool)>(&::WaveHarmonic::Crest::Lod::SetGlobals)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x182576e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::Enable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::Disable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825766b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::Destroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182576660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.AfterExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::AfterExecute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::Allocate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182575bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.GetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::GetEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182576730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"GetEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(bool, bool)>(&::WaveHarmonic::Crest::Lod::SetEnabled)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182576d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SetEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.GetResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::GetResolution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182576740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"GetResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_SafeResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_SafeResolution)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182578690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_SafeResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.ReAllocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::ReAllocate)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x182576ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.LoadCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Lod::LoadCameraData)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1825768e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.StoreCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Lod::StoreCameraData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.RemoveCameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::Lod::RemoveCameraData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182576cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::System::Enum*, ::System::Enum*)>(&::WaveHarmonic::Crest::Lod::SetDirty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182576d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SetDirty", {}, {::i2c::type_of<::System::Enum*>(), ::i2c::type_of<::System::Enum*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_Blur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_Blur)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Blur", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.set_Blur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(bool)>(&::WaveHarmonic::Crest::Lod::set_Blur)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182578700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_Blur", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_BlurIterations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_BlurIterations)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_BlurIterations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.set_BlurIterations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(int32_t)>(&::WaveHarmonic::Crest::Lod::set_BlurIterations)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_BlurIterations", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_Enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182576730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(bool)>(&::WaveHarmonic::Crest::Lod::set_Enabled)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182578720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_OverrideResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_OverrideResolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_OverrideResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.set_OverrideResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(bool)>(&::WaveHarmonic::Crest::Lod::set_OverrideResolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825787f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_OverrideResolution", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_Resolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_Resolution)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182576740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Resolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.set_Resolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(int32_t)>(&::WaveHarmonic::Crest::Lod::set_Resolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182578810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_Resolution", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_TextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_TextureFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_TextureFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.set_TextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::WaveHarmonic::Crest::Lod::set_TextureFormat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825788a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_TextureFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.get_TextureFormatMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LodTextureFormatMode (::WaveHarmonic::Crest::Lod::*)()>(&::WaveHarmonic::Crest::Lod::get_TextureFormatMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_TextureFormatMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Lod.set_TextureFormatMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Lod::*)(::WaveHarmonic::Crest::LodTextureFormatMode)>(&::WaveHarmonic::Crest::Lod::set_TextureFormatMode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182578830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_TextureFormatMode", {}, {::i2c::type_of<::WaveHarmonic::Crest::LodTextureFormatMode>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::Lod::__cordl_internal_get__Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled;
}
constexpr bool const& WaveHarmonic::Crest::Lod::__cordl_internal_get__Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Enabled = value;
}
constexpr bool& WaveHarmonic::Crest::Lod::__cordl_internal_get__OverrideResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideResolution;
}
constexpr bool const& WaveHarmonic::Crest::Lod::__cordl_internal_get__OverrideResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideResolution;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__OverrideResolution(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideResolution = value;
}
constexpr int32_t& WaveHarmonic::Crest::Lod::__cordl_internal_get__Resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution;
}
constexpr int32_t const& WaveHarmonic::Crest::Lod::__cordl_internal_get__Resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolution;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__Resolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Resolution = value;
}
constexpr ::WaveHarmonic::Crest::LodTextureFormatMode& WaveHarmonic::Crest::Lod::__cordl_internal_get__TextureFormatMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextureFormatMode;
}
constexpr ::WaveHarmonic::Crest::LodTextureFormatMode const& WaveHarmonic::Crest::Lod::__cordl_internal_get__TextureFormatMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextureFormatMode;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__TextureFormatMode(::WaveHarmonic::Crest::LodTextureFormatMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TextureFormatMode = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& WaveHarmonic::Crest::Lod::__cordl_internal_get__TextureFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextureFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& WaveHarmonic::Crest::Lod::__cordl_internal_get__TextureFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextureFormat;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__TextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TextureFormat = value;
}
constexpr bool& WaveHarmonic::Crest::Lod::__cordl_internal_get__Blur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Blur;
}
constexpr bool const& WaveHarmonic::Crest::Lod::__cordl_internal_get__Blur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Blur;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__Blur(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Blur = value;
}
constexpr int32_t& WaveHarmonic::Crest::Lod::__cordl_internal_get__BlurIterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlurIterations;
}
constexpr int32_t const& WaveHarmonic::Crest::Lod::__cordl_internal_get__BlurIterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlurIterations;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__BlurIterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BlurIterations = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& WaveHarmonic::Crest::Lod::__cordl_internal_get__CompatibleTextureFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompatibleTextureFormat_k__BackingField;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& WaveHarmonic::Crest::Lod::__cordl_internal_get__CompatibleTextureFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CompatibleTextureFormat_k__BackingField;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__CompatibleTextureFormat_k__BackingField(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CompatibleTextureFormat_k__BackingField = value;
}
constexpr ::WaveHarmonic::Crest::IQueryable*& WaveHarmonic::Crest::Lod::__cordl_internal_get__Queryable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Queryable_k__BackingField;
}
constexpr ::WaveHarmonic::Crest::IQueryable* const& WaveHarmonic::Crest::Lod::__cordl_internal_get__Queryable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Queryable_k__BackingField;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__Queryable_k__BackingField(::WaveHarmonic::Crest::IQueryable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Queryable_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& WaveHarmonic::Crest::Lod::__cordl_internal_get__DataTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DataTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& WaveHarmonic::Crest::Lod::__cordl_internal_get__DataTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DataTexture;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__DataTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DataTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& WaveHarmonic::Crest::Lod::__cordl_internal_get__ViewMatrices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewMatrices;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& WaveHarmonic::Crest::Lod::__cordl_internal_get__ViewMatrices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ViewMatrices;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__ViewMatrices(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ViewMatrices = value;
}
constexpr ::ArrayW<::WaveHarmonic::Crest::Cascade>& WaveHarmonic::Crest::Lod::__cordl_internal_get__Cascades()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cascades;
}
constexpr ::ArrayW<::WaveHarmonic::Crest::Cascade> const& WaveHarmonic::Crest::Lod::__cordl_internal_get__Cascades() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cascades;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__Cascades(::ArrayW<::WaveHarmonic::Crest::Cascade>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cascades = value;
}
constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*& WaveHarmonic::Crest::Lod::__cordl_internal_get__SamplingParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplingParameters;
}
constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* const& WaveHarmonic::Crest::Lod::__cordl_internal_get__SamplingParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplingParameters;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__SamplingParameters(::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SamplingParameters = value;
}
constexpr bool& WaveHarmonic::Crest::Lod::__cordl_internal_get__Valid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Valid;
}
constexpr bool const& WaveHarmonic::Crest::Lod::__cordl_internal_get__Valid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Valid;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__Valid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Valid = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::Lod::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::Lod::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
constexpr bool& WaveHarmonic::Crest::Lod::__cordl_internal_get__TargetsToClear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetsToClear;
}
constexpr bool const& WaveHarmonic::Crest::Lod::__cordl_internal_get__TargetsToClear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetsToClear;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__TargetsToClear(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TargetsToClear = value;
}
constexpr int32_t& WaveHarmonic::Crest::Lod::__cordl_internal_get__TextureShaderID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextureShaderID;
}
constexpr int32_t const& WaveHarmonic::Crest::Lod::__cordl_internal_get__TextureShaderID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextureShaderID;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__TextureShaderID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TextureShaderID = value;
}
constexpr int32_t& WaveHarmonic::Crest::Lod::__cordl_internal_get__TextureSourceShaderID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextureSourceShaderID;
}
constexpr int32_t const& WaveHarmonic::Crest::Lod::__cordl_internal_get__TextureSourceShaderID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextureSourceShaderID;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__TextureSourceShaderID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TextureSourceShaderID = value;
}
constexpr int32_t& WaveHarmonic::Crest::Lod::__cordl_internal_get__SamplingParametersShaderID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplingParametersShaderID;
}
constexpr int32_t const& WaveHarmonic::Crest::Lod::__cordl_internal_get__SamplingParametersShaderID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplingParametersShaderID;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__SamplingParametersShaderID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SamplingParametersShaderID = value;
}
constexpr int32_t& WaveHarmonic::Crest::Lod::__cordl_internal_get__SamplingParametersCascadeShaderID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplingParametersCascadeShaderID;
}
constexpr int32_t const& WaveHarmonic::Crest::Lod::__cordl_internal_get__SamplingParametersCascadeShaderID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplingParametersCascadeShaderID;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__SamplingParametersCascadeShaderID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SamplingParametersCascadeShaderID = value;
}
constexpr int32_t& WaveHarmonic::Crest::Lod::__cordl_internal_get__SamplingParametersCascadeSourceShaderID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplingParametersCascadeSourceShaderID;
}
constexpr int32_t const& WaveHarmonic::Crest::Lod::__cordl_internal_get__SamplingParametersCascadeSourceShaderID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SamplingParametersCascadeSourceShaderID;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__SamplingParametersCascadeSourceShaderID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SamplingParametersCascadeSourceShaderID = value;
}
constexpr ::StringW& WaveHarmonic::Crest::Lod::__cordl_internal_get__TextureName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextureName;
}
constexpr ::StringW const& WaveHarmonic::Crest::Lod::__cordl_internal_get__TextureName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TextureName;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__TextureName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TextureName = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*>*& WaveHarmonic::Crest::Lod::__cordl_internal_get__AdditionalCameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdditionalCameraData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*>* const& WaveHarmonic::Crest::Lod::__cordl_internal_get__AdditionalCameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdditionalCameraData;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__AdditionalCameraData(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AdditionalCameraData = value;
}
constexpr bool& WaveHarmonic::Crest::Lod::__cordl_internal_get__ReAllocateTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReAllocateTexture;
}
constexpr bool const& WaveHarmonic::Crest::Lod::__cordl_internal_get__ReAllocateTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReAllocateTexture;
}
constexpr void WaveHarmonic::Crest::Lod::__cordl_internal_set__ReAllocateTexture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReAllocateTexture = value;
}
inline ::StringW WaveHarmonic::Crest::Lod::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WaveHarmonic::Crest::Lod::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::Lod::get_RequestedTextureFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::Lod::get_CompatibleTextureFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_CompatibleTextureFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::set_CompatibleTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_CompatibleTextureFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::Lod::get_ClearColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::Lod::get_NeedToReadWriteTextureData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::Lod::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::Lod::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::Lod::get_BufferCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2DArray> WaveHarmonic::Crest::Lod::get_NullTexture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2DArray>>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::Lod::get_RequiresClearBorder()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::IQueryable* WaveHarmonic::Crest::Lod::get_Queryable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Queryable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IQueryable*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::set_Queryable(::WaveHarmonic::Crest::IQueryable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_Queryable", {}, {::i2c::type_of<::WaveHarmonic::Crest::IQueryable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::Lod::get_Persistent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Persistent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::Lod::get_SkipEndOfFrame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> WaveHarmonic::Crest::Lod::get_DataTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_DataTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline ::ArrayW<::WaveHarmonic::Crest::Cascade> WaveHarmonic::Crest::Lod::get_Cascades()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Cascades", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::WaveHarmonic::Crest::Cascade>>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::Lod::get_Slices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Slices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::WaveHarmonic::Crest::WaterRenderer> WaveHarmonic::Crest::Lod::get_Water()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Water", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> WaveHarmonic::Crest::Lod::CreateLodDataTextures(::StringW  postfix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"CreateLodDataTextures", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, postfix);
}
inline void WaveHarmonic::Crest::Lod::FlipBuffers(::UnityEngine::Rendering::CommandBuffer*  commands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"FlipBuffers", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commands);
}
inline void WaveHarmonic::Crest::Lod::Clear(::UnityEngine::RenderTexture*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"Clear", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline bool WaveHarmonic::Crest::Lod::get_AlwaysClear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::BuildCommandBuffer(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Rendering::CommandBuffer*  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, buffer);
}
inline bool WaveHarmonic::Crest::Lod::SubmitDraws(::UnityEngine::Rendering::CommandBuffer*  buffer, ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  draws, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, bool  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SubmitDraws", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, draws, target, pass, filter);
}
inline void WaveHarmonic::Crest::Lod::SetOrigin(::UnityEngine::Vector3  newOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SetOrigin", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOrigin);
}
inline void WaveHarmonic::Crest::Lod::ClearBorder(::UnityEngine::Rendering::CommandBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"ClearBorder", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void WaveHarmonic::Crest::Lod::UpdateSamplingParameters(::UnityEngine::Rendering::CommandBuffer*  commands, bool  initialize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"UpdateSamplingParameters", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commands, initialize);
}
inline int32_t WaveHarmonic::Crest::Lod::SuggestIndex(::UnityEngine::Rect  sampleArea)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SuggestIndex", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sampleArea);
}
inline int32_t WaveHarmonic::Crest::Lod::SuggestIndexForWaves(::UnityEngine::Rect  sampleArea)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SuggestIndexForWaves", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sampleArea);
}
inline int32_t WaveHarmonic::Crest::Lod::SuggestIndexForWaves(::UnityEngine::Rect  sampleArea, float_t  minimumSpatialLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SuggestIndexForWaves", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sampleArea, minimumSpatialLength);
}
inline void WaveHarmonic::Crest::Lod::TryBlur(::UnityEngine::Rendering::CommandBuffer*  commands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"TryBlur", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commands);
}
template<typename T>
inline void WaveHarmonic::Crest::Lod::Bind(T  target)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 21}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void WaveHarmonic::Crest::Lod::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::SetGlobals(bool  enable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void WaveHarmonic::Crest::Lod::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::AfterExecute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::Allocate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::Lod::GetEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"GetEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::SetEnabled(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SetEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline int32_t WaveHarmonic::Crest::Lod::GetResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"GetResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::Lod::get_SafeResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_SafeResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::ReAllocate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::LoadCameraData(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::Lod::StoreCameraData(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void WaveHarmonic::Crest::Lod::RemoveCameraData(::UnityEngine::Camera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Lod*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
template<typename I>
inline void WaveHarmonic::Crest::Lod::SetDirty(I  previous, I  current)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                    {"SetDirty", {::i2c::class_of<I>()}, {::i2c::type_of<I>(), ::i2c::type_of<I>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<I>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::Lod::SetDirty(::System::Enum*  previous, ::System::Enum*  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"SetDirty", {}, {::i2c::type_of<::System::Enum*>(), ::i2c::type_of<::System::Enum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline bool WaveHarmonic::Crest::Lod::get_Blur()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Blur", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::set_Blur(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_Blur", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::Lod::get_BlurIterations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_BlurIterations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::set_BlurIterations(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_BlurIterations", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::Lod::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::Lod::get_OverrideResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_OverrideResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::set_OverrideResolution(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_OverrideResolution", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::Lod::get_Resolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_Resolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::set_Resolution(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_Resolution", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::Lod::get_TextureFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_TextureFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::set_TextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_TextureFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::LodTextureFormatMode WaveHarmonic::Crest::Lod::get_TextureFormatMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"get_TextureFormatMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodTextureFormatMode>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Lod::set_TextureFormatMode(::WaveHarmonic::Crest::LodTextureFormatMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Lod*>(),
                        {"set_TextureFormatMode", {}, {::i2c::type_of<::WaveHarmonic::Crest::LodTextureFormatMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::Lod* WaveHarmonic::Crest::Lod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Lod*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Lod::Lod()   {
}
