#pragma once
// IWYU pragma private; include "UnityEngine/CustomRenderTexture.hpp"
#include "UnityEngine/zzzz__RenderTexture_impl.hpp"
#include "UnityEngine/zzzz__CustomRenderTexture_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__CustomRenderTextureInitializationSource_def.hpp"
#include "UnityEngine/zzzz__CustomRenderTextureUpdateMode_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTextureReadWrite_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.Internal_CreateCustomRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::CustomRenderTexture*)>(&::UnityEngine::CustomRenderTexture::Internal_CreateCustomRenderTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182263c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"Internal_CreateCustomRenderTexture", {}, {::i2c::type_of<::UnityEngine::CustomRenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.TriggerUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CustomRenderTexture::*)(int32_t)>(&::UnityEngine::CustomRenderTexture::TriggerUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182263cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"TriggerUpdate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CustomRenderTexture::*)(int32_t)>(&::UnityEngine::CustomRenderTexture::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182263d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CustomRenderTexture::*)()>(&::UnityEngine::CustomRenderTexture::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182263ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.TriggerInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CustomRenderTexture::*)()>(&::UnityEngine::CustomRenderTexture::TriggerInitialization)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182263c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"TriggerInitialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CustomRenderTexture::*)()>(&::UnityEngine::CustomRenderTexture::Initialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182263c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.set_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CustomRenderTexture::*)(::UnityEngine::Material*)>(&::UnityEngine::CustomRenderTexture::set_material)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182264070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.set_initializationTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CustomRenderTexture::*)(::UnityEngine::Texture*)>(&::UnityEngine::CustomRenderTexture::set_initializationTexture)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182264010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_initializationTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.set_initializationSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CustomRenderTexture::*)(::UnityEngine::CustomRenderTextureInitializationSource)>(&::UnityEngine::CustomRenderTexture::set_initializationSource)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182263fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_initializationSource", {}, {::i2c::type_of<::UnityEngine::CustomRenderTextureInitializationSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.set_updateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CustomRenderTexture::*)(::UnityEngine::CustomRenderTextureUpdateMode)>(&::UnityEngine::CustomRenderTexture::set_updateMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822640d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_updateMode", {}, {::i2c::type_of<::UnityEngine::CustomRenderTextureUpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.set_initializationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CustomRenderTexture::*)(::UnityEngine::CustomRenderTextureUpdateMode)>(&::UnityEngine::CustomRenderTexture::set_initializationMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182263f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_initializationMode", {}, {::i2c::type_of<::UnityEngine::CustomRenderTextureUpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CustomRenderTexture::*)(int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite)>(&::UnityEngine::CustomRenderTexture::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182263d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CustomRenderTexture::*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::UnityEngine::CustomRenderTexture::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182263ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.TriggerUpdate_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::CustomRenderTexture::TriggerUpdate_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182263ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"TriggerUpdate_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.TriggerInitialization_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::CustomRenderTexture::TriggerInitialization_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182263c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"TriggerInitialization_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.set_material_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::CustomRenderTexture::set_material_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182264060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_material_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.set_initializationTexture_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::CustomRenderTexture::set_initializationTexture_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182264000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_initializationTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.set_initializationSource_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::CustomRenderTextureInitializationSource)>(&::UnityEngine::CustomRenderTexture::set_initializationSource_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182263fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_initializationSource_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CustomRenderTextureInitializationSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.set_updateMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::CustomRenderTextureUpdateMode)>(&::UnityEngine::CustomRenderTexture::set_updateMode_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822640c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_updateMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CustomRenderTextureUpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CustomRenderTexture.set_initializationMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::CustomRenderTextureUpdateMode)>(&::UnityEngine::CustomRenderTexture::set_initializationMode_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182263f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_initializationMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CustomRenderTextureUpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::CustomRenderTexture::Internal_CreateCustomRenderTexture(::UnityEngine::CustomRenderTexture*  rt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"Internal_CreateCustomRenderTexture", {}, {::i2c::type_of<::UnityEngine::CustomRenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt);
}
inline void UnityEngine::CustomRenderTexture::TriggerUpdate(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"TriggerUpdate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void UnityEngine::CustomRenderTexture::Update(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void UnityEngine::CustomRenderTexture::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::CustomRenderTexture::TriggerInitialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"TriggerInitialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::CustomRenderTexture::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::CustomRenderTexture::set_material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::CustomRenderTexture::set_initializationTexture(::UnityEngine::Texture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_initializationTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::CustomRenderTexture::set_initializationSource(::UnityEngine::CustomRenderTextureInitializationSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_initializationSource", {}, {::i2c::type_of<::UnityEngine::CustomRenderTextureInitializationSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::CustomRenderTexture::set_updateMode(::UnityEngine::CustomRenderTextureUpdateMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_updateMode", {}, {::i2c::type_of<::UnityEngine::CustomRenderTextureUpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::CustomRenderTexture::set_initializationMode(::UnityEngine::CustomRenderTextureUpdateMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_initializationMode", {}, {::i2c::type_of<::UnityEngine::CustomRenderTextureUpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::CustomRenderTexture::_ctor(int32_t  width, int32_t  height, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, format, readWrite);
}
inline void UnityEngine::CustomRenderTexture::_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, format);
}
inline void UnityEngine::CustomRenderTexture::TriggerUpdate_Injected(::System::IntPtr  _unity_self, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"TriggerUpdate_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, count);
}
inline void UnityEngine::CustomRenderTexture::TriggerInitialization_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"TriggerInitialization_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::CustomRenderTexture::set_material_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_material_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::CustomRenderTexture::set_initializationTexture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_initializationTexture_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::CustomRenderTexture::set_initializationSource_Injected(::System::IntPtr  _unity_self, ::UnityEngine::CustomRenderTextureInitializationSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_initializationSource_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CustomRenderTextureInitializationSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::CustomRenderTexture::set_updateMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::CustomRenderTextureUpdateMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_updateMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CustomRenderTextureUpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::CustomRenderTexture::set_initializationMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::CustomRenderTextureUpdateMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::CustomRenderTexture*>(),
                        {"set_initializationMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::CustomRenderTextureUpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::CustomRenderTexture* UnityEngine::CustomRenderTexture::New_ctor(int32_t  width, int32_t  height, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CustomRenderTexture*>(width, height, format, readWrite));
}
inline ::UnityEngine::CustomRenderTexture* UnityEngine::CustomRenderTexture::New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::CustomRenderTexture*>(width, height, format));
}
// Ctor Parameters []
constexpr ::UnityEngine::CustomRenderTexture::CustomRenderTexture()   {
}
