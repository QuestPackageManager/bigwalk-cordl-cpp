#pragma once
// IWYU pragma private; include "System/IO/FileSystemInfo.hpp"
#include "GlobalNamespace/zzzz__Interop_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::IO::FileSystemInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816e73b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileSystemInfo* (*)(::StringW, ::by_ref<::System::IO::Enumeration::FileSystemEntry>)>(&::System::IO::FileSystemInfo::Create)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1816eb720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::IO::Enumeration::FileSystemEntry>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.Invalidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::Invalidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816e73b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Invalidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*)>(&::System::IO::FileSystemInfo::Init)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816eb9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_Attributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::FileAttributes (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816eba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_Attributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_ExistsCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_ExistsCore)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816ebc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_ExistsCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_CreationTimeCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_CreationTimeCore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1816ebad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_CreationTimeCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_LengthCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_LengthCore)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816ebe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LengthCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.EnsureDataInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::EnsureDataInitialized)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1816eb8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"EnsureDataInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::Refresh)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816eba20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_NormalizedPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_NormalizedPath)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1816ebe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_NormalizedPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::FileSystemInfo::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1816e71c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::FileSystemInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::IO::FileSystemInfo::GetObjectData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1816eb900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                    {::i2c::class_of<::System::IO::FileSystemInfo*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_FullName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_FullName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                    {::i2c::class_of<::System::IO::FileSystemInfo*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_Extension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_Extension)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1816ebd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_Extension", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                    {::i2c::class_of<::System::IO::FileSystemInfo*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_Exists)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1816ebcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                    {::i2c::class_of<::System::IO::FileSystemInfo*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_CreationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_CreationTime)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1816ebbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_CreationTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.get_CreationTimeUtc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::get_CreationTimeUtc)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1816ebb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_CreationTimeUtc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::FileSystemInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::FileSystemInfo::*)()>(&::System::IO::FileSystemInfo::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1816eba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                    {::i2c::class_of<::System::IO::FileSystemInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA& System::IO::FileSystemInfo::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA const& System::IO::FileSystemInfo::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void System::IO::FileSystemInfo::__cordl_internal_set__data(::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
constexpr int32_t& System::IO::FileSystemInfo::__cordl_internal_get__dataInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataInitialized;
}
constexpr int32_t const& System::IO::FileSystemInfo::__cordl_internal_get__dataInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataInitialized;
}
constexpr void System::IO::FileSystemInfo::__cordl_internal_set__dataInitialized(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataInitialized = value;
}
constexpr ::StringW& System::IO::FileSystemInfo::__cordl_internal_get_FullPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FullPath;
}
constexpr ::StringW const& System::IO::FileSystemInfo::__cordl_internal_get_FullPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FullPath;
}
constexpr void System::IO::FileSystemInfo::__cordl_internal_set_FullPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FullPath = value;
}
constexpr ::StringW& System::IO::FileSystemInfo::__cordl_internal_get_OriginalPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OriginalPath;
}
constexpr ::StringW const& System::IO::FileSystemInfo::__cordl_internal_get_OriginalPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OriginalPath;
}
constexpr void System::IO::FileSystemInfo::__cordl_internal_set_OriginalPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OriginalPath = value;
}
constexpr ::StringW& System::IO::FileSystemInfo::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& System::IO::FileSystemInfo::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void System::IO::FileSystemInfo::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
inline void System::IO::FileSystemInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IO::FileSystemInfo* System::IO::FileSystemInfo::Create(::StringW  fullPath, ::by_ref<::System::IO::Enumeration::FileSystemEntry>  findData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::IO::Enumeration::FileSystemEntry>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileSystemInfo*>(nullptr, ___internal_method, fullPath, findData);
}
inline void System::IO::FileSystemInfo::Invalidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Invalidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::Init(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::System::IO::FileAttributes System::IO::FileSystemInfo::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_Attributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::FileAttributes>(this, ___internal_method);
}
inline bool System::IO::FileSystemInfo::get_ExistsCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_ExistsCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTimeOffset System::IO::FileSystemInfo::get_CreationTimeCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_CreationTimeCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(this, ___internal_method);
}
inline int64_t System::IO::FileSystemInfo::get_LengthCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_LengthCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::EnsureDataInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"EnsureDataInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::IO::FileSystemInfo::get_NormalizedPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_NormalizedPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::IO::FileSystemInfo::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::IO::FileSystemInfo::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystemInfo*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::IO::FileSystemInfo::get_FullName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystemInfo*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::IO::FileSystemInfo::get_Extension()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_Extension", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::IO::FileSystemInfo::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystemInfo*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::IO::FileSystemInfo::get_Exists()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystemInfo*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime System::IO::FileSystemInfo::get_CreationTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_CreationTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::IO::FileSystemInfo::get_CreationTimeUtc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::FileSystemInfo*>(),
                        {"get_CreationTimeUtc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::StringW System::IO::FileSystemInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::IO::FileSystemInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IO::FileSystemInfo* System::IO::FileSystemInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileSystemInfo*>());
}
inline ::System::IO::FileSystemInfo* System::IO::FileSystemInfo::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::FileSystemInfo*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::IO::FileSystemInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::IO::FileSystemInfo::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::IO::FileSystemInfo::FileSystemInfo()   {
}
