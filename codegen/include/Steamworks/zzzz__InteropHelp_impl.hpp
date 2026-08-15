#pragma once
// IWYU pragma private; include "Steamworks/InteropHelp.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__InteropHelp_def.hpp"
#include "Steamworks/zzzz__InteropHelp_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Steamworks::InteropHelp_UTF8StringHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::InteropHelp_UTF8StringHandle::*)(::StringW)>(&::Steamworks::InteropHelp_UTF8StringHandle::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805a77f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp_UTF8StringHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::InteropHelp_UTF8StringHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::InteropHelp_UTF8StringHandle::*)()>(&::Steamworks::InteropHelp_UTF8StringHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805a77b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::InteropHelp_UTF8StringHandle*>(),
                    {::i2c::class_of<::Steamworks::InteropHelp_UTF8StringHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Steamworks::InteropHelp_UTF8StringHandle::_ctor(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp_UTF8StringHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline bool Steamworks::InteropHelp_UTF8StringHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::InteropHelp_UTF8StringHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Steamworks::InteropHelp_UTF8StringHandle* Steamworks::InteropHelp_UTF8StringHandle::New_ctor(::StringW  str)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::InteropHelp_UTF8StringHandle*>(str));
}
// Ctor Parameters []
constexpr ::Steamworks::InteropHelp_UTF8StringHandle::InteropHelp_UTF8StringHandle()   {
}
//  Writing Method size for method: ::Steamworks::InteropHelp_SteamParamStringArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::InteropHelp_SteamParamStringArray::*)(::System::Collections::Generic::IList_1<::StringW>*)>(&::Steamworks::InteropHelp_SteamParamStringArray::_ctor)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x1805a6710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp_SteamParamStringArray*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::InteropHelp_SteamParamStringArray.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::InteropHelp_SteamParamStringArray::*)()>(&::Steamworks::InteropHelp_SteamParamStringArray::Finalize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805a6690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::InteropHelp_SteamParamStringArray*>(),
                    {::i2c::class_of<::Steamworks::InteropHelp_SteamParamStringArray*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::InteropHelp_SteamParamStringArray.op_Implicit___System__IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Steamworks::InteropHelp_SteamParamStringArray*)>(&::Steamworks::InteropHelp_SteamParamStringArray::op_Implicit___System__IntPtr)> {
  constexpr static std::size_t size = 0xba0;
  constexpr static std::size_t addrs = 0x1805a6b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp_SteamParamStringArray*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Steamworks::InteropHelp_SteamParamStringArray*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::IntPtr>& Steamworks::InteropHelp_SteamParamStringArray::__cordl_internal_get_m_Strings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Strings;
}
constexpr ::ArrayW<::System::IntPtr> const& Steamworks::InteropHelp_SteamParamStringArray::__cordl_internal_get_m_Strings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Strings;
}
constexpr void Steamworks::InteropHelp_SteamParamStringArray::__cordl_internal_set_m_Strings(::ArrayW<::System::IntPtr>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Strings = value;
}
constexpr ::System::IntPtr& Steamworks::InteropHelp_SteamParamStringArray::__cordl_internal_get_m_ptrStrings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ptrStrings;
}
constexpr ::System::IntPtr const& Steamworks::InteropHelp_SteamParamStringArray::__cordl_internal_get_m_ptrStrings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ptrStrings;
}
constexpr void Steamworks::InteropHelp_SteamParamStringArray::__cordl_internal_set_m_ptrStrings(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ptrStrings = value;
}
constexpr ::System::IntPtr& Steamworks::InteropHelp_SteamParamStringArray::__cordl_internal_get_m_pSteamParamStringArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pSteamParamStringArray;
}
constexpr ::System::IntPtr const& Steamworks::InteropHelp_SteamParamStringArray::__cordl_internal_get_m_pSteamParamStringArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_pSteamParamStringArray;
}
constexpr void Steamworks::InteropHelp_SteamParamStringArray::__cordl_internal_set_m_pSteamParamStringArray(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_pSteamParamStringArray = value;
}
inline void Steamworks::InteropHelp_SteamParamStringArray::_ctor(::System::Collections::Generic::IList_1<::StringW>*  strings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp_SteamParamStringArray*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
inline void Steamworks::InteropHelp_SteamParamStringArray::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::InteropHelp_SteamParamStringArray*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr Steamworks::InteropHelp_SteamParamStringArray::op_Implicit___System__IntPtr(::Steamworks::InteropHelp_SteamParamStringArray*  that)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp_SteamParamStringArray*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Steamworks::InteropHelp_SteamParamStringArray*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, that);
}
inline ::Steamworks::InteropHelp_SteamParamStringArray* Steamworks::InteropHelp_SteamParamStringArray::New_ctor(::System::Collections::Generic::IList_1<::StringW>*  strings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::InteropHelp_SteamParamStringArray*>(strings));
}
// Ctor Parameters []
constexpr ::Steamworks::InteropHelp_SteamParamStringArray::InteropHelp_SteamParamStringArray()   {
}
//  Writing Method size for method: ::Steamworks::InteropHelp.TestIfPlatformSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::InteropHelp::TestIfPlatformSupported)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"TestIfPlatformSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::InteropHelp.TestIfAvailableClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::InteropHelp::TestIfAvailableClient)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180552b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"TestIfAvailableClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::InteropHelp.TestIfAvailableGameServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Steamworks::InteropHelp::TestIfAvailableGameServer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180552bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"TestIfAvailableGameServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::InteropHelp.PtrToStringUTF8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::Steamworks::InteropHelp::PtrToStringUTF8)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180552a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"PtrToStringUTF8", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::InteropHelp.ByteArrayToStringUTF8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Steamworks::InteropHelp::ByteArrayToStringUTF8)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805529b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"ByteArrayToStringUTF8", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::InteropHelp.StringToByteArrayUTF8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::Steamworks::InteropHelp::StringToByteArrayUTF8)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180552b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"StringToByteArrayUTF8", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::InteropHelp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::InteropHelp::*)()>(&::Steamworks::InteropHelp::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::InteropHelp::TestIfPlatformSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"TestIfPlatformSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::InteropHelp::TestIfAvailableClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"TestIfAvailableClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Steamworks::InteropHelp::TestIfAvailableGameServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"TestIfAvailableGameServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Steamworks::InteropHelp::PtrToStringUTF8(::System::IntPtr  nativeUtf8)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"PtrToStringUTF8", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, nativeUtf8);
}
inline ::StringW Steamworks::InteropHelp::ByteArrayToStringUTF8(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"ByteArrayToStringUTF8", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer);
}
inline void Steamworks::InteropHelp::StringToByteArrayUTF8(::StringW  str, ::ArrayW<uint8_t>  outArrayBuffer, int32_t  outArrayBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {"StringToByteArrayUTF8", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str, outArrayBuffer, outArrayBufferSize);
}
inline void Steamworks::InteropHelp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::InteropHelp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Steamworks::InteropHelp* Steamworks::InteropHelp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Steamworks::InteropHelp*>());
}
// Ctor Parameters []
constexpr ::Steamworks::InteropHelp::InteropHelp()   {
}
