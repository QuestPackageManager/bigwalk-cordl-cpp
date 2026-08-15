#pragma once
// IWYU pragma private; include "UnityEngine/Texture2DArray.hpp"
#include "UnityEngine/zzzz__Texture_impl.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__DefaultFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__TextureCreationFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MipmapLimitDescriptor_def.hpp"
#include "UnityEngine/zzzz__TextureColorSpace_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_allSlices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Texture2DArray::get_allSlices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225e600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_allSlices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_depth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Texture2DArray::*)()>(&::UnityEngine::Texture2DArray::get_depth)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225e620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_depth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_isReadable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2DArray::*)()>(&::UnityEngine::Texture2DArray::get_isReadable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225e660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                    {::i2c::class_of<::UnityEngine::Texture2DArray*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.Internal_CreateImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2DArray*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, bool, ::StringW)>(&::UnityEngine::Texture2DArray::Internal_CreateImpl)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18225d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Internal_CreateImpl", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.Internal_Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2DArray*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, bool, ::StringW)>(&::UnityEngine::Texture2DArray::Internal_Create)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18225d990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.ApplyImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(bool, bool)>(&::UnityEngine::Texture2DArray::ApplyImpl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18225d650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ApplyImpl", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.GetPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::Texture2DArray::*)(int32_t, int32_t)>(&::UnityEngine::Texture2DArray::GetPixels)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18225d790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixelDataImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2DArray::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::SetPixelDataImpl)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18225da50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixelDataImpl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(::ArrayW<::UnityEngine::Color>, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::SetPixels)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18225db60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(::ArrayW<::UnityEngine::Color>, int32_t)>(&::UnityEngine::Texture2DArray::SetPixels)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18225dac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.ValidateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2DArray::*)(::UnityEngine::TextureFormat, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::ValidateFormat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18225dcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ValidateFormat", {}, {::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.ValidateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Texture2DArray::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::ValidateFormat)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18225dc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ValidateFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18225e560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18225de50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::DefaultFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t, ::UnityEngine::MipmapLimitDescriptor)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18225df40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18225dfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18225e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, int32_t, ::UnityEngine::MipmapLimitDescriptor)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18225e040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool, bool, ::UnityEngine::MipmapLimitDescriptor)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18225e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool, bool)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18225dee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, int32_t, bool)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18225e230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool, bool)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18225e300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, bool, bool)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18225e290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextureFormat, bool)>(&::UnityEngine::Texture2DArray::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18225dde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)(bool, bool)>(&::UnityEngine::Texture2DArray::Apply)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18225d700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Apply", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Texture2DArray::*)()>(&::UnityEngine::Texture2DArray::Apply)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18225d6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Apply", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.ValidateIsNotCrunched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&::UnityEngine::Texture2DArray::ValidateIsNotCrunched)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18225ddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ValidateIsNotCrunched", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_depth_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Texture2DArray::get_depth_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225e610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_depth_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.get_isReadable_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Texture2DArray::get_isReadable_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225e650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_isReadable_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.Internal_CreateImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Texture2DArray*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::TextureColorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags, bool, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Texture2DArray::Internal_CreateImpl_Injected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18225d7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Internal_CreateImpl_Injected", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.ApplyImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool, bool)>(&::UnityEngine::Texture2DArray::ApplyImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ApplyImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.GetPixels_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::GetPixels_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225d780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixelDataImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::SetPixelDataImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225da40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixelDataImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Texture2DArray.SetPixels_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, int32_t)>(&::UnityEngine::Texture2DArray::SetPixels_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225dab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Texture2DArray::get_allSlices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_allSlices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Texture2DArray::get_depth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_depth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Texture2DArray::get_isReadable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Texture2DArray*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Texture2DArray::Internal_CreateImpl(::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Internal_CreateImpl", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mono, w, h, d, mipCount, format, colorSpace, flags, ignoreMipmapLimit, mipmapLimitGroupName);
}
inline void UnityEngine::Texture2DArray::Internal_Create(::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mono, w, h, d, mipCount, format, colorSpace, flags, ignoreMipmapLimit, mipmapLimitGroupName);
}
inline void UnityEngine::Texture2DArray::ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ApplyImpl", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Texture2DArray::GetPixels(int32_t  arrayElement, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method, arrayElement, miplevel);
}
inline bool UnityEngine::Texture2DArray::SetPixelDataImpl(::System::IntPtr  data, int32_t  mipLevel, int32_t  element, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixelDataImpl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, mipLevel, element, elementSize, dataArraySize, sourceDataStartIndex);
}
inline void UnityEngine::Texture2DArray::SetPixels(::ArrayW<::UnityEngine::Color>  colors, int32_t  arrayElement, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, arrayElement, miplevel);
}
inline void UnityEngine::Texture2DArray::SetPixels(::ArrayW<::UnityEngine::Color>  colors, int32_t  arrayElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors, arrayElement);
}
inline bool UnityEngine::Texture2DArray::ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ValidateFormat", {}, {::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, format, width, height);
}
inline bool UnityEngine::Texture2DArray::ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ValidateFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, format, width, height);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags, mipCount);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::DefaultFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags, mipCount, mipmapLimitDescriptor);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags, mipCount);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, format, flags, mipCount, mipmapLimitDescriptor);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::MipmapLimitDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipCount, linear, createUninitialized, mipmapLimitDescriptor);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipCount, linear, createUninitialized);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipCount, linear);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear, bool  createUninitialized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipChain, linear, createUninitialized);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipChain, linear);
}
inline void UnityEngine::Texture2DArray::_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, depth, textureFormat, mipChain);
}
inline void UnityEngine::Texture2DArray::Apply(bool  updateMipmaps, bool  makeNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Apply", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMipmaps, makeNoLongerReadable);
}
inline void UnityEngine::Texture2DArray::Apply()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Apply", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Texture2DArray::SetPixelData(::Unity::Collections::NativeArray_1<T>  data, int32_t  mipLevel, int32_t  element, int32_t  sourceDataStartIndex)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                    {"SetPixelData", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, mipLevel, element, sourceDataStartIndex);
}
inline void UnityEngine::Texture2DArray::ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ValidateIsNotCrunched", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flags);
}
inline int32_t UnityEngine::Texture2DArray::get_depth_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_depth_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Texture2DArray::get_isReadable_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"get_isReadable_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Texture2DArray::Internal_CreateImpl_Injected(::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, bool  ignoreMipmapLimit, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  mipmapLimitGroupName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"Internal_CreateImpl_Injected", {}, {::i2c::type_of<::UnityEngine::Texture2DArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::TextureColorSpace>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::TextureCreationFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mono, w, h, d, mipCount, format, colorSpace, flags, ignoreMipmapLimit, mipmapLimitGroupName);
}
inline void UnityEngine::Texture2DArray::ApplyImpl_Injected(::System::IntPtr  _unity_self, bool  updateMipmaps, bool  makeNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"ApplyImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, updateMipmaps, makeNoLongerReadable);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Texture2DArray::GetPixels_Injected(::System::IntPtr  _unity_self, int32_t  arrayElement, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"GetPixels_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(nullptr, ___internal_method, _unity_self, arrayElement, miplevel);
}
inline bool UnityEngine::Texture2DArray::SetPixelDataImpl_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  data, int32_t  mipLevel, int32_t  element, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixelDataImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, data, mipLevel, element, elementSize, dataArraySize, sourceDataStartIndex);
}
inline void UnityEngine::Texture2DArray::SetPixels_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, int32_t  arrayElement, int32_t  miplevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Texture2DArray*>(),
                        {"SetPixels_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, colors, arrayElement, miplevel);
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, format, flags));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, format, flags, mipCount));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, format, flags, mipCount, mipmapLimitDescriptor));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, format, flags));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, format, flags, mipCount));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, format, flags, mipCount, mipmapLimitDescriptor));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, ::UnityEngine::MipmapLimitDescriptor  mipmapLimitDescriptor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, textureFormat, mipCount, linear, createUninitialized, mipmapLimitDescriptor));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, textureFormat, mipCount, linear, createUninitialized));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, textureFormat, mipCount, linear));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear, bool  createUninitialized)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, textureFormat, mipChain, linear, createUninitialized));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, textureFormat, mipChain, linear));
}
inline ::UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Texture2DArray*>(width, height, depth, textureFormat, mipChain));
}
// Ctor Parameters []
constexpr ::UnityEngine::Texture2DArray::Texture2DArray()   {
}
