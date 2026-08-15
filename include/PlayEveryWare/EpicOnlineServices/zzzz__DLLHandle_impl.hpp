#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/DLLHandle.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__DLLHandle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__FileVersionInfo_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.get_IsInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::DLLHandle::*)()>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::get_IsInvalid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180537380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::Log)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180537270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.GetPathsToPlugins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)()>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::GetPathsToPlugins)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180536bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"GetPathsToPlugins", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.GetVersionForLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::GetVersionForLibrary)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180536f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"GetVersionForLibrary", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.GetProductVersionForLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::GetProductVersionForLibrary)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180536ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"GetProductVersionForLibrary", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.GetLibraryVersionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::FileVersionInfo* (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::GetLibraryVersionInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805369b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"GetLibraryVersionInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.GetPathForLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::GetPathForLibrary)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1805369e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"GetPathForLibrary", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.LoadDynamicLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::DLLHandle* (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::LoadDynamicLibrary)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180536ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"LoadDynamicLibrary", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::DLLHandle::*)(::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180537350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::DLLHandle::*)()>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180537280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.LoadFunctionAsDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::PlayEveryWare::EpicOnlineServices::DLLHandle::*)(::System::Type*, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::LoadFunctionAsDelegate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180537160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"LoadFunctionAsDelegate", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.LoadFunctionAsIntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::PlayEveryWare::EpicOnlineServices::DLLHandle::*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::LoadFunctionAsIntPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180537230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"LoadFunctionAsIntPtr", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.ConfigureFromLibraryDelegateFieldOnClassWithFunctionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::DLLHandle::*)(::System::Type*, ::System::Type*, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::ConfigureFromLibraryDelegateFieldOnClassWithFunctionName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805368d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"ConfigureFromLibraryDelegateFieldOnClassWithFunctionName", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.ConfigureFromLibraryDelegateFieldOnClassWithFunctionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Type*, ::System::Type*, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::ConfigureFromLibraryDelegateFieldOnClassWithFunctionName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180536940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"ConfigureFromLibraryDelegateFieldOnClassWithFunctionName", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::DLLHandle.LoadFunctionAsDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::IntPtr, ::System::Type*, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::DLLHandle::LoadFunctionAsDelegate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180537170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"LoadFunctionAsDelegate", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayEveryWare::EpicOnlineServices::DLLHandle::get_IsInvalid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::DLLHandle::Log(::StringW  toPrint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toPrint);
}
inline ::System::Collections::Generic::List_1<::StringW>* PlayEveryWare::EpicOnlineServices::DLLHandle::GetPathsToPlugins()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"GetPathsToPlugins", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::DLLHandle::GetVersionForLibrary(::StringW  libraryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"GetVersionForLibrary", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, libraryName);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::DLLHandle::GetProductVersionForLibrary(::StringW  libraryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"GetProductVersionForLibrary", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, libraryName);
}
inline ::System::Diagnostics::FileVersionInfo* PlayEveryWare::EpicOnlineServices::DLLHandle::GetLibraryVersionInfo(::StringW  libraryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"GetLibraryVersionInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::FileVersionInfo*>(nullptr, ___internal_method, libraryName);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::DLLHandle::GetPathForLibrary(::StringW  libraryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"GetPathForLibrary", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, libraryName);
}
inline ::PlayEveryWare::EpicOnlineServices::DLLHandle* PlayEveryWare::EpicOnlineServices::DLLHandle::LoadDynamicLibrary(::StringW  libraryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"LoadDynamicLibrary", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(nullptr, ___internal_method, libraryName);
}
inline void PlayEveryWare::EpicOnlineServices::DLLHandle::_ctor(::System::IntPtr  intPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intPtr);
}
inline bool PlayEveryWare::EpicOnlineServices::DLLHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Delegate* PlayEveryWare::EpicOnlineServices::DLLHandle::LoadFunctionAsDelegate(::System::Type*  functionType, ::StringW  functionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"LoadFunctionAsDelegate", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, functionType, functionName);
}
inline ::System::IntPtr PlayEveryWare::EpicOnlineServices::DLLHandle::LoadFunctionAsIntPtr(::StringW  functionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"LoadFunctionAsIntPtr", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, functionName);
}
inline void PlayEveryWare::EpicOnlineServices::DLLHandle::ConfigureFromLibraryDelegateFieldOnClassWithFunctionName(::System::Type*  clazz, ::System::Type*  delegateType, ::StringW  functionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"ConfigureFromLibraryDelegateFieldOnClassWithFunctionName", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clazz, delegateType, functionName);
}
inline void PlayEveryWare::EpicOnlineServices::DLLHandle::ConfigureFromLibraryDelegateFieldOnClassWithFunctionName(::System::IntPtr  libraryHandle, ::System::Type*  clazz, ::System::Type*  delegateType, ::StringW  functionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"ConfigureFromLibraryDelegateFieldOnClassWithFunctionName", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, libraryHandle, clazz, delegateType, functionName);
}
inline ::System::Delegate* PlayEveryWare::EpicOnlineServices::DLLHandle::LoadFunctionAsDelegate(::System::IntPtr  libraryHandle, ::System::Type*  functionType, ::StringW  functionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(),
                        {"LoadFunctionAsDelegate", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, libraryHandle, functionType, functionName);
}
inline ::PlayEveryWare::EpicOnlineServices::DLLHandle* PlayEveryWare::EpicOnlineServices::DLLHandle::New_ctor(::System::IntPtr  intPtr)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::DLLHandle*>(intPtr));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::DLLHandle::DLLHandle()   {
}
