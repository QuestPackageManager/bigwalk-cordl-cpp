#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/SystemDynamicLibrary.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__SystemDynamicLibrary_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary.DLLH_create_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::DLLH_create_context)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180546c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"DLLH_create_context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary.DLLH_destroy_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::DLLH_destroy_context)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180546cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"DLLH_destroy_context", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary.DLLH_load_library_at_path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::DLLH_load_library_at_path)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180546e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"DLLH_load_library_at_path", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary.DLLH_unload_library_at_path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::DLLH_unload_library_at_path)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180546eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"DLLH_unload_library_at_path", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary.DLLH_load_function_with_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::DLLH_load_function_with_name)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180546d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"DLLH_load_function_with_name", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::*)()>(&::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180547140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary* (*)()>(&::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::get_Instance)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805471b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary.GetHandleForModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::GetHandleForModule)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"GetHandleForModule", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary.LoadLibraryAtPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::LoadLibraryAtPath)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180547000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"LoadLibraryAtPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary.UnloadLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::*)(::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::UnloadLibrary)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805470b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"UnloadLibrary", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary.LoadFunctionWithName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::*)(::System::IntPtr, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::LoadFunctionWithName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180546f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"LoadFunctionWithName", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::__cordl_internal_get_DLLHContex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DLLHContex;
}
constexpr ::System::IntPtr const& PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::__cordl_internal_get_DLLHContex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DLLHContex;
}
constexpr void PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::__cordl_internal_set_DLLHContex(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DLLHContex = value;
}
inline void PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::setStaticF_s_instance(::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*, "s_instance", ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(std::forward<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary* PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::getStaticF_s_instance()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*, "s_instance", ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>();
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::DLLH_create_context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"DLLH_create_context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::DLLH_destroy_context(::System::IntPtr  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"DLLH_destroy_context", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::DLLH_load_library_at_path(::System::IntPtr  ctx, ::StringW  library_path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"DLLH_load_library_at_path", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, ctx, library_path);
}
inline bool PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::DLLH_unload_library_at_path(::System::IntPtr  ctx, ::System::IntPtr  library_handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"DLLH_unload_library_at_path", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ctx, library_handle);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::DLLH_load_function_with_name(::System::IntPtr  ctx, ::System::IntPtr  library_handle, ::StringW  function)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"DLLH_load_function_with_name", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, ctx, library_handle, function);
}
inline void PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary* PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(nullptr, ___internal_method);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::GetHandleForModule(::StringW  moduleName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"GetHandleForModule", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, moduleName);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::LoadLibraryAtPath(::StringW  libraryPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"LoadLibraryAtPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, libraryPath);
}
inline bool PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::UnloadLibrary(::System::IntPtr  libraryHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"UnloadLibrary", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, libraryHandle);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::LoadFunctionWithName(::System::IntPtr  libraryHandle, ::StringW  functionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>(),
                        {"LoadFunctionWithName", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, libraryHandle, functionName);
}
inline ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary* PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::SystemDynamicLibrary::SystemDynamicLibrary()   {
}
