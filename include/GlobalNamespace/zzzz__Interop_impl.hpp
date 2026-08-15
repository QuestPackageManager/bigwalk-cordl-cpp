#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop.hpp"
#include "System/IO/zzzz__FileAttributes_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFindHandle_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeLibraryHandle_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeRegistryHandle_def.hpp"
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/IO/zzzz__FileMode_def.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer(char16_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer(char16_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer()   {
}
//  Writing Method size for method: ::GlobalNamespace::Kernel32_Interop_FILE_TIME.ToTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::Kernel32_Interop_FILE_TIME::*)()>(&::GlobalNamespace::Kernel32_Interop_FILE_TIME::ToTicks)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815c1f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_FILE_TIME>(),
                        {"ToTicks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Kernel32_Interop_FILE_TIME.ToDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::GlobalNamespace::Kernel32_Interop_FILE_TIME::*)()>(&::GlobalNamespace::Kernel32_Interop_FILE_TIME::ToDateTimeOffset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815c1ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_FILE_TIME>(),
                        {"ToDateTimeOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int64_t GlobalNamespace::Kernel32_Interop_FILE_TIME::ToTicks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_FILE_TIME>(),
                        {"ToTicks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline ::System::DateTimeOffset GlobalNamespace::Kernel32_Interop_FILE_TIME::ToDateTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_FILE_TIME>(),
                        {"ToDateTimeOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "dwLowDateTime", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dwHighDateTime", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_TIME::Kernel32_Interop_FILE_TIME(uint32_t  dwLowDateTime, uint32_t  dwHighDateTime) noexcept  {
this->dwLowDateTime = dwLowDateTime;
this->dwHighDateTime = dwHighDateTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_TIME::Kernel32_Interop_FILE_TIME()   {
}
//  Writing Method size for method: ::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA.get_cFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA::*)()>(&::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA::get_cFileName)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1815d28b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>(),
                        {"get_cFileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA.SetFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA::*)(::StringW)>(&::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA::SetFileName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815d2830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>(),
                        {"SetFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::ReadOnlySpan_1<char16_t> GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA::get_cFileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>(),
                        {"get_cFileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method);
}
inline void GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA::SetFileName(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>(),
                        {"SetFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fileName);
}
// Ctor Parameters [CppParam { name: "dwFileAttributes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ftCreationTime", ty: "::GlobalNamespace::Kernel32_Interop_FILE_TIME", modifiers: "", def_value: Some("{}") }, CppParam { name: "ftLastAccessTime", ty: "::GlobalNamespace::Kernel32_Interop_FILE_TIME", modifiers: "", def_value: Some("{}") }, CppParam { name: "ftLastWriteTime", ty: "::GlobalNamespace::Kernel32_Interop_FILE_TIME", modifiers: "", def_value: Some("{}") }, CppParam { name: "nFileSizeHigh", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nFileSizeLow", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dwReserved0", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dwReserved1", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_cFileName", ty: "::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "_cAlternateFileName", ty: "::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA::Kernel32_Interop_WIN32_FIND_DATA(uint32_t  dwFileAttributes, ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftCreationTime, ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftLastAccessTime, ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftLastWriteTime, uint32_t  nFileSizeHigh, uint32_t  nFileSizeLow, uint32_t  dwReserved0, uint32_t  dwReserved1, ::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cFileName_e__FixedBuffer  _cFileName, ::GlobalNamespace::WIN32_FIND_DATA_Kernel32_Interop___cAlternateFileName_e__FixedBuffer  _cAlternateFileName) noexcept  {
this->dwFileAttributes = dwFileAttributes;
this->ftCreationTime = ftCreationTime;
this->ftLastAccessTime = ftLastAccessTime;
this->ftLastWriteTime = ftLastWriteTime;
this->nFileSizeHigh = nFileSizeHigh;
this->nFileSizeLow = nFileSizeLow;
this->dwReserved0 = dwReserved0;
this->dwReserved1 = dwReserved1;
this->_cFileName = _cFileName;
this->_cAlternateFileName = _cAlternateFileName;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA::Kernel32_Interop_WIN32_FIND_DATA()   {
}
//  Writing Method size for method: ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Kernel32_Interop_SYSTEMTIME::*)(::by_ref<::GlobalNamespace::Kernel32_Interop_SYSTEMTIME>)>(&::GlobalNamespace::Kernel32_Interop_SYSTEMTIME::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815c95a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_SYSTEMTIME>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_SYSTEMTIME>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::Kernel32_Interop_SYSTEMTIME::Equals(::by_ref<::GlobalNamespace::Kernel32_Interop_SYSTEMTIME>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_SYSTEMTIME>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_SYSTEMTIME>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "Year", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Month", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DayOfWeek", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Day", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Hour", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Minute", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Second", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Milliseconds", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME::Kernel32_Interop_SYSTEMTIME(uint16_t  Year, uint16_t  Month, uint16_t  DayOfWeek, uint16_t  Day, uint16_t  Hour, uint16_t  Minute, uint16_t  Second, uint16_t  Milliseconds) noexcept  {
this->Year = Year;
this->Month = Month;
this->DayOfWeek = DayOfWeek;
this->Day = Day;
this->Hour = Hour;
this->Minute = Minute;
this->Second = Second;
this->Milliseconds = Milliseconds;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME::Kernel32_Interop_SYSTEMTIME()   {
}
//  Writing Method size for method: ::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT::*)(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>)>(&::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815c8d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT::_ctor(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  tzi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tzi);
}
// Ctor Parameters [CppParam { name: "Bias", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StandardBias", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DaylightBias", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StandardDate", ty: "::GlobalNamespace::Kernel32_Interop_SYSTEMTIME", modifiers: "", def_value: Some("{}") }, CppParam { name: "DaylightDate", ty: "::GlobalNamespace::Kernel32_Interop_SYSTEMTIME", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT::Kernel32_Interop_REG_TZI_FORMAT(int32_t  Bias, int32_t  StandardBias, int32_t  DaylightBias, ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  StandardDate, ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  DaylightDate) noexcept  {
this->Bias = Bias;
this->StandardBias = StandardBias;
this->DaylightBias = DaylightBias;
this->StandardDate = StandardDate;
this->DaylightDate = DaylightDate;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Kernel32_Interop_REG_TZI_FORMAT::Kernel32_Interop_REG_TZI_FORMAT()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer(char16_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer(char16_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer(char16_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer()   {
}
//  Writing Method size for method: ::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION.GetTimeZoneKeyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION::*)()>(&::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION::GetTimeZoneKeyName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815d24a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION>(),
                        {"GetTimeZoneKeyName", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION::GetTimeZoneKeyName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION>(),
                        {"GetTimeZoneKeyName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Bias", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StandardName", ty: "::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "StandardDate", ty: "::GlobalNamespace::Kernel32_Interop_SYSTEMTIME", modifiers: "", def_value: Some("{}") }, CppParam { name: "StandardBias", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DaylightName", ty: "::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "DaylightDate", ty: "::GlobalNamespace::Kernel32_Interop_SYSTEMTIME", modifiers: "", def_value: Some("{}") }, CppParam { name: "DaylightBias", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TimeZoneKeyName", ty: "::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "DynamicDaylightTimeDisabled", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION(int32_t  Bias, ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer  StandardName, ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  StandardDate, int32_t  StandardBias, ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer  DaylightName, ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  DaylightDate, int32_t  DaylightBias, ::GlobalNamespace::TIME_DYNAMIC_ZONE_INFORMATION_Kernel32_Interop__TimeZoneKeyName_e__FixedBuffer  TimeZoneKeyName, uint8_t  DynamicDaylightTimeDisabled) noexcept  {
this->Bias = Bias;
this->StandardName = StandardName;
this->StandardDate = StandardDate;
this->StandardBias = StandardBias;
this->DaylightName = DaylightName;
this->DaylightDate = DaylightDate;
this->DaylightBias = DaylightBias;
this->TimeZoneKeyName = TimeZoneKeyName;
this->DynamicDaylightTimeDisabled = DynamicDaylightTimeDisabled;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer(char16_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer(char16_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer()   {
}
//  Writing Method size for method: ::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION::*)(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION>)>(&::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1815d2500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION.GetStandardName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION::*)()>(&::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION::GetStandardName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815d24e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>(),
                        {"GetStandardName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION.GetDaylightName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION::*)()>(&::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION::GetDaylightName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815d24c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>(),
                        {"GetDaylightName", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION::_ctor(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION>  dtzi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dtzi);
}
inline ::StringW GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION::GetStandardName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>(),
                        {"GetStandardName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION::GetDaylightName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>(),
                        {"GetDaylightName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Bias", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StandardName", ty: "::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "StandardDate", ty: "::GlobalNamespace::Kernel32_Interop_SYSTEMTIME", modifiers: "", def_value: Some("{}") }, CppParam { name: "StandardBias", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DaylightName", ty: "::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "DaylightDate", ty: "::GlobalNamespace::Kernel32_Interop_SYSTEMTIME", modifiers: "", def_value: Some("{}") }, CppParam { name: "DaylightBias", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION::Kernel32_Interop_TIME_ZONE_INFORMATION(int32_t  Bias, ::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__StandardName_e__FixedBuffer  StandardName, ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  StandardDate, int32_t  StandardBias, ::GlobalNamespace::TIME_ZONE_INFORMATION_Kernel32_Interop__DaylightName_e__FixedBuffer  DaylightName, ::GlobalNamespace::Kernel32_Interop_SYSTEMTIME  DaylightDate, int32_t  DaylightBias) noexcept  {
this->Bias = Bias;
this->StandardName = StandardName;
this->StandardDate = StandardDate;
this->StandardBias = StandardBias;
this->DaylightName = DaylightName;
this->DaylightDate = DaylightDate;
this->DaylightBias = DaylightBias;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION::Kernel32_Interop_TIME_ZONE_INFORMATION()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS()   {
}
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileBasicInfo{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileStandardInfo{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileNameInfo{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileRenameInfo{static_cast<uint32_t>(0x3u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileDispositionInfo{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileAllocationInfo{static_cast<uint32_t>(0x5u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileEndOfFileInfo{static_cast<uint32_t>(0x6u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileStreamInfo{static_cast<uint32_t>(0x7u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileCompressionInfo{static_cast<uint32_t>(0x8u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileAttributeTagInfo{static_cast<uint32_t>(0x9u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileIdBothDirectoryInfo{static_cast<uint32_t>(0xau)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileIdBothDirectoryRestartInfo{static_cast<uint32_t>(0xbu)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileIoPriorityHintInfo{static_cast<uint32_t>(0xcu)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileRemoteProtocolInfo{static_cast<uint32_t>(0xdu)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileFullDirectoryInfo{static_cast<uint32_t>(0xeu)};
constexpr ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS::FileFullDirectoryRestartInfo{static_cast<uint32_t>(0xfu)};
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS::Kernel32_Interop_FINDEX_INFO_LEVELS(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS::Kernel32_Interop_FINDEX_INFO_LEVELS()   {
}
constexpr ::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS  GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS::FindExInfoStandard{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS  GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS::FindExInfoBasic{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS  GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS::FindExInfoMaxInfoLevel{static_cast<uint32_t>(0x2u)};
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS::Kernel32_Interop_FINDEX_SEARCH_OPS(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS::Kernel32_Interop_FINDEX_SEARCH_OPS()   {
}
constexpr ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS  GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS::FindExSearchNameMatch{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS  GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS::FindExSearchLimitToDirectories{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS  GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS::FindExSearchLimitToDevices{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS  GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS::FindExSearchMaxSearchOp{static_cast<uint32_t>(0x3u)};
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS::Kernel32_Interop_GET_FILEEX_INFO_LEVELS(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS::Kernel32_Interop_GET_FILEEX_INFO_LEVELS()   {
}
constexpr ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS  GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS::GetFileExInfoStandard{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS  GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS::GetFileExMaxInfoLevel{static_cast<uint32_t>(0x1u)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Interop_BOOL::Interop_BOOL(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_BOOL::Interop_BOOL()   {
}
constexpr ::GlobalNamespace::Interop_BOOL  GlobalNamespace::Interop_BOOL::FALSE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Interop_BOOL  GlobalNamespace::Interop_BOOL::TRUE{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "nLength", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lpSecurityDescriptor", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "bInheritHandle", ty: "::GlobalNamespace::Interop_BOOL", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES::Kernel32_Interop_SECURITY_ATTRIBUTES(uint32_t  nLength, ::System::IntPtr  lpSecurityDescriptor, ::GlobalNamespace::Interop_BOOL  bInheritHandle) noexcept  {
this->nLength = nLength;
this->lpSecurityDescriptor = lpSecurityDescriptor;
this->bInheritHandle = bInheritHandle;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES::Kernel32_Interop_SECURITY_ATTRIBUTES()   {
}
//  Writing Method size for method: ::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA.PopulateFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA::*)(::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>)>(&::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA::PopulateFrom)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815d27f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>(),
                        {"PopulateFrom", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA::PopulateFrom(::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  findData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>(),
                        {"PopulateFrom", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, findData);
}
// Ctor Parameters [CppParam { name: "dwFileAttributes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ftCreationTime", ty: "::GlobalNamespace::Kernel32_Interop_FILE_TIME", modifiers: "", def_value: Some("{}") }, CppParam { name: "ftLastAccessTime", ty: "::GlobalNamespace::Kernel32_Interop_FILE_TIME", modifiers: "", def_value: Some("{}") }, CppParam { name: "ftLastWriteTime", ty: "::GlobalNamespace::Kernel32_Interop_FILE_TIME", modifiers: "", def_value: Some("{}") }, CppParam { name: "nFileSizeHigh", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nFileSizeLow", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA(int32_t  dwFileAttributes, ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftCreationTime, ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftLastAccessTime, ::GlobalNamespace::Kernel32_Interop_FILE_TIME  ftLastWriteTime, uint32_t  nFileSizeHigh, uint32_t  nFileSizeLow) noexcept  {
this->dwFileAttributes = dwFileAttributes;
this->ftCreationTime = ftCreationTime;
this->ftLastAccessTime = ftLastAccessTime;
this->ftLastWriteTime = ftLastWriteTime;
this->nFileSizeHigh = nFileSizeHigh;
this->nFileSizeLow = nFileSizeLow;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA()   {
}
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.DeleteVolumeMountPointPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::Interop_Kernel32::DeleteVolumeMountPointPrivate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815c2530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"DeleteVolumeMountPointPrivate", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.DeleteVolumeMountPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::Interop_Kernel32::DeleteVolumeMountPoint)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1815c25d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"DeleteVolumeMountPoint", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.FreeLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::GlobalNamespace::Interop_Kernel32::FreeLibrary)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815c2a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"FreeLibrary", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.LoadLibraryEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeLibraryHandle* (*)(::StringW, ::System::IntPtr, int32_t)>(&::GlobalNamespace::Interop_Kernel32::LoadLibraryEx)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1815c3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"LoadLibraryEx", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.GetFileMUIPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::StringW, ::by_ref<::System::Text::StringBuilder*>, ::by_ref<int32_t>, ::by_ref<::System::Text::StringBuilder*>, ::by_ref<int32_t>, ::by_ref<int64_t>)>(&::GlobalNamespace::Interop_Kernel32::GetFileMUIPath)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1815c2d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetFileMUIPath", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.GetDynamicTimeZoneInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION>)>(&::GlobalNamespace::Interop_Kernel32::GetDynamicTimeZoneInformation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815c2ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetDynamicTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.GetTimeZoneInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>)>(&::GlobalNamespace::Interop_Kernel32::GetTimeZoneInformation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815c2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.CloseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::GlobalNamespace::Interop_Kernel32::CloseHandle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815c2050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"CloseHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.CreateDirectoryPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES>)>(&::GlobalNamespace::Interop_Kernel32::CreateDirectoryPrivate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815c20e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"CreateDirectoryPrivate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.CreateDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES>)>(&::GlobalNamespace::Interop_Kernel32::CreateDirectory)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815c2180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.CreateFilePrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW, int32_t, ::System::IO::FileShare, ::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES*, ::System::IO::FileMode, int32_t, ::System::IntPtr)>(&::GlobalNamespace::Interop_Kernel32::CreateFilePrivate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815c2230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"CreateFilePrivate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES*>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.CreateFile_IntPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW, int32_t, ::System::IO::FileShare, ::System::IO::FileMode, int32_t)>(&::GlobalNamespace::Interop_Kernel32::CreateFile_IntPtr)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815c2310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"CreateFile_IntPtr", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.DeleteFilePrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::Interop_Kernel32::DeleteFilePrivate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815c23f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"DeleteFilePrivate", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.DeleteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::Interop_Kernel32::DeleteFile)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815c2490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"DeleteFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.FindFirstFileExPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeFindHandle* (*)(::StringW, ::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>, ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS, ::System::IntPtr, int32_t)>(&::GlobalNamespace::Interop_Kernel32::FindFirstFileExPrivate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1815c26a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"FindFirstFileExPrivate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>(), ::i2c::type_of<::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.FindFirstFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeFindHandle* (*)(::StringW, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>)>(&::GlobalNamespace::Interop_Kernel32::FindFirstFile)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815c27a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"FindFirstFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.FindNextFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Microsoft::Win32::SafeHandles::SafeFindHandle*, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>)>(&::GlobalNamespace::Interop_Kernel32::FindNextFile)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815c2880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"FindNextFile", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeFindHandle*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.FormatMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::IntPtr, uint32_t, int32_t, char16_t*, int32_t, ::ArrayW<::System::IntPtr>)>(&::GlobalNamespace::Interop_Kernel32::FormatMessage)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1815c2960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"FormatMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::Interop_Kernel32::GetMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815c2fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::Interop_Kernel32::GetMessage)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1815c2ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetMessage", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.TryGetErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, ::System::Span_1<char16_t>, ::by_ref<::StringW>)>(&::GlobalNamespace::Interop_Kernel32::TryGetErrorMessage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1815c34c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"TryGetErrorMessage", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.GetFileAttributesExPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>)>(&::GlobalNamespace::Interop_Kernel32::GetFileAttributesExPrivate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815c2b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetFileAttributesExPrivate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.GetFileAttributesEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>)>(&::GlobalNamespace::Interop_Kernel32::GetFileAttributesEx)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815c2c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetFileAttributesEx", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.GetFileInformationByHandleEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS, ::System::IntPtr, uint32_t)>(&::GlobalNamespace::Interop_Kernel32::GetFileInformationByHandleEx)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815c2ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetFileInformationByHandleEx", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.MoveFileExPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, uint32_t)>(&::GlobalNamespace::Interop_Kernel32::MoveFileExPrivate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815c3150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"MoveFileExPrivate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.MoveFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::GlobalNamespace::Interop_Kernel32::MoveFile)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1815c3210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"MoveFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.RemoveDirectoryPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::Interop_Kernel32::RemoveDirectoryPrivate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815c32e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"RemoveDirectoryPrivate", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.RemoveDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::Interop_Kernel32::RemoveDirectory)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815c3380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"RemoveDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Kernel32.SetThreadErrorMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::by_ref<uint32_t>)>(&::GlobalNamespace::Interop_Kernel32::SetThreadErrorMode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815c3420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"SetThreadErrorMode", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::Interop_Kernel32::DeleteVolumeMountPointPrivate(::StringW  mountPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"DeleteVolumeMountPointPrivate", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mountPoint);
}
inline bool GlobalNamespace::Interop_Kernel32::DeleteVolumeMountPoint(::StringW  mountPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"DeleteVolumeMountPoint", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mountPoint);
}
inline bool GlobalNamespace::Interop_Kernel32::FreeLibrary(::System::IntPtr  hModule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"FreeLibrary", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hModule);
}
inline ::Microsoft::Win32::SafeHandles::SafeLibraryHandle* GlobalNamespace::Interop_Kernel32::LoadLibraryEx(::StringW  libFilename, ::System::IntPtr  reserved, int32_t  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"LoadLibraryEx", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeLibraryHandle*>(nullptr, ___internal_method, libFilename, reserved, flags);
}
inline bool GlobalNamespace::Interop_Kernel32::GetFileMUIPath(uint32_t  flags, ::StringW  filePath, ::by_ref<::System::Text::StringBuilder*>  language, ::by_ref<int32_t>  languageLength, ::by_ref<::System::Text::StringBuilder*>  fileMuiPath, ::by_ref<int32_t>  fileMuiPathLength, ::by_ref<int64_t>  enumerator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetFileMUIPath", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags, filePath, language, languageLength, fileMuiPath, fileMuiPathLength, enumerator);
}
inline uint32_t GlobalNamespace::Interop_Kernel32::GetDynamicTimeZoneInformation(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION>  pTimeZoneInformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetDynamicTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_DYNAMIC_ZONE_INFORMATION>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, pTimeZoneInformation);
}
inline uint32_t GlobalNamespace::Interop_Kernel32::GetTimeZoneInformation(::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>  lpTimeZoneInformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetTimeZoneInformation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_TIME_ZONE_INFORMATION>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, lpTimeZoneInformation);
}
inline bool GlobalNamespace::Interop_Kernel32::CloseHandle(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"CloseHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline bool GlobalNamespace::Interop_Kernel32::CreateDirectoryPrivate(::StringW  path, ::by_ref<::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES>  lpSecurityAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"CreateDirectoryPrivate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path, lpSecurityAttributes);
}
inline bool GlobalNamespace::Interop_Kernel32::CreateDirectory(::StringW  path, ::by_ref<::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES>  lpSecurityAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"CreateDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path, lpSecurityAttributes);
}
inline ::System::IntPtr GlobalNamespace::Interop_Kernel32::CreateFilePrivate(::StringW  lpFileName, int32_t  dwDesiredAccess, ::System::IO::FileShare  dwShareMode, ::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES*  securityAttrs, ::System::IO::FileMode  dwCreationDisposition, int32_t  dwFlagsAndAttributes, ::System::IntPtr  hTemplateFile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"CreateFilePrivate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::GlobalNamespace::Kernel32_Interop_SECURITY_ATTRIBUTES*>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, lpFileName, dwDesiredAccess, dwShareMode, securityAttrs, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
}
inline ::System::IntPtr GlobalNamespace::Interop_Kernel32::CreateFile_IntPtr(::StringW  lpFileName, int32_t  dwDesiredAccess, ::System::IO::FileShare  dwShareMode, ::System::IO::FileMode  dwCreationDisposition, int32_t  dwFlagsAndAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"CreateFile_IntPtr", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::System::IO::FileMode>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, lpFileName, dwDesiredAccess, dwShareMode, dwCreationDisposition, dwFlagsAndAttributes);
}
inline bool GlobalNamespace::Interop_Kernel32::DeleteFilePrivate(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"DeleteFilePrivate", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool GlobalNamespace::Interop_Kernel32::DeleteFile(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"DeleteFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::Microsoft::Win32::SafeHandles::SafeFindHandle* GlobalNamespace::Interop_Kernel32::FindFirstFileExPrivate(::StringW  lpFileName, ::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS  fInfoLevelId, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  lpFindFileData, ::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS  fSearchOp, ::System::IntPtr  lpSearchFilter, int32_t  dwAdditionalFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"FindFirstFileExPrivate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Kernel32_Interop_FINDEX_INFO_LEVELS>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>(), ::i2c::type_of<::GlobalNamespace::Kernel32_Interop_FINDEX_SEARCH_OPS>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeFindHandle*>(nullptr, ___internal_method, lpFileName, fInfoLevelId, lpFindFileData, fSearchOp, lpSearchFilter, dwAdditionalFlags);
}
inline ::Microsoft::Win32::SafeHandles::SafeFindHandle* GlobalNamespace::Interop_Kernel32::FindFirstFile(::StringW  fileName, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"FindFirstFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeFindHandle*>(nullptr, ___internal_method, fileName, data);
}
inline bool GlobalNamespace::Interop_Kernel32::FindNextFile(::Microsoft::Win32::SafeHandles::SafeFindHandle*  hndFindFile, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>  lpFindFileData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"FindNextFile", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeFindHandle*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FIND_DATA>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hndFindFile, lpFindFileData);
}
inline int32_t GlobalNamespace::Interop_Kernel32::FormatMessage(int32_t  dwFlags, ::System::IntPtr  lpSource, uint32_t  dwMessageId, int32_t  dwLanguageId, char16_t*  lpBuffer, int32_t  nSize, ::ArrayW<::System::IntPtr>  arguments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"FormatMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, arguments);
}
inline ::StringW GlobalNamespace::Interop_Kernel32::GetMessage(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode);
}
inline ::StringW GlobalNamespace::Interop_Kernel32::GetMessage(::System::IntPtr  moduleHandle, int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetMessage", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, moduleHandle, errorCode);
}
inline bool GlobalNamespace::Interop_Kernel32::TryGetErrorMessage(::System::IntPtr  moduleHandle, int32_t  errorCode, ::System::Span_1<char16_t>  buffer, ::by_ref<::StringW>  errorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"TryGetErrorMessage", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, moduleHandle, errorCode, buffer, errorMsg);
}
inline bool GlobalNamespace::Interop_Kernel32::GetFileAttributesExPrivate(::StringW  name, ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS  fileInfoLevel, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>  lpFileInformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetFileAttributesExPrivate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, fileInfoLevel, lpFileInformation);
}
inline bool GlobalNamespace::Interop_Kernel32::GetFileAttributesEx(::StringW  name, ::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS  fileInfoLevel, ::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>  lpFileInformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetFileAttributesEx", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Kernel32_Interop_GET_FILEEX_INFO_LEVELS>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Kernel32_Interop_WIN32_FILE_ATTRIBUTE_DATA>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, fileInfoLevel, lpFileInformation);
}
inline bool GlobalNamespace::Interop_Kernel32::GetFileInformationByHandleEx(::System::IntPtr  hFile, ::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS  FileInformationClass, ::System::IntPtr  lpFileInformation, uint32_t  dwBufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"GetFileInformationByHandleEx", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::GlobalNamespace::Kernel32_Interop_FILE_INFO_BY_HANDLE_CLASS>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hFile, FileInformationClass, lpFileInformation, dwBufferSize);
}
inline bool GlobalNamespace::Interop_Kernel32::MoveFileExPrivate(::StringW  src, ::StringW  dst, uint32_t  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"MoveFileExPrivate", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, src, dst, flags);
}
inline bool GlobalNamespace::Interop_Kernel32::MoveFile(::StringW  src, ::StringW  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"MoveFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, src, dst);
}
inline bool GlobalNamespace::Interop_Kernel32::RemoveDirectoryPrivate(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"RemoveDirectoryPrivate", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool GlobalNamespace::Interop_Kernel32::RemoveDirectory(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"RemoveDirectory", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool GlobalNamespace::Interop_Kernel32::SetThreadErrorMode(uint32_t  dwNewMode, ::by_ref<uint32_t>  lpOldMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Kernel32*>(),
                        {"SetThreadErrorMode", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dwNewMode, lpOldMode);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_Kernel32::Interop_Kernel32()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BCrypt_Interop_NTSTATUS::BCrypt_Interop_NTSTATUS(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BCrypt_Interop_NTSTATUS::BCrypt_Interop_NTSTATUS()   {
}
constexpr ::GlobalNamespace::BCrypt_Interop_NTSTATUS  GlobalNamespace::BCrypt_Interop_NTSTATUS::STATUS_SUCCESS{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::BCrypt_Interop_NTSTATUS  GlobalNamespace::BCrypt_Interop_NTSTATUS::STATUS_NOT_FOUND{static_cast<uint32_t>(0xc0000225u)};
constexpr ::GlobalNamespace::BCrypt_Interop_NTSTATUS  GlobalNamespace::BCrypt_Interop_NTSTATUS::STATUS_INVALID_PARAMETER{static_cast<uint32_t>(0xc000000du)};
constexpr ::GlobalNamespace::BCrypt_Interop_NTSTATUS  GlobalNamespace::BCrypt_Interop_NTSTATUS::STATUS_NO_MEMORY{static_cast<uint32_t>(0xc0000017u)};
//  Writing Method size for method: ::GlobalNamespace::Interop_BCrypt.BCryptGenRandom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BCrypt_Interop_NTSTATUS (*)(::System::IntPtr, uint8_t*, int32_t, int32_t)>(&::GlobalNamespace::Interop_BCrypt::BCryptGenRandom)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815c1280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_BCrypt*>(),
                        {"BCryptGenRandom", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BCrypt_Interop_NTSTATUS GlobalNamespace::Interop_BCrypt::BCryptGenRandom(::System::IntPtr  hAlgorithm, uint8_t*  pbBuffer, int32_t  cbBuffer, int32_t  dwFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_BCrypt*>(),
                        {"BCryptGenRandom", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BCrypt_Interop_NTSTATUS>(nullptr, ___internal_method, hAlgorithm, pbBuffer, cbBuffer, dwFlags);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_BCrypt::Interop_BCrypt()   {
}
//  Writing Method size for method: ::GlobalNamespace::Interop_User32.LoadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Microsoft::Win32::SafeHandles::SafeLibraryHandle*, int32_t, ::by_ref<::System::Text::StringBuilder*>, int32_t)>(&::GlobalNamespace::Interop_User32::LoadString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1815d26c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_User32*>(),
                        {"LoadString", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeLibraryHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Interop_User32::LoadString(::Microsoft::Win32::SafeHandles::SafeLibraryHandle*  handle, int32_t  id, ::by_ref<::System::Text::StringBuilder*>  buffer, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_User32*>(),
                        {"LoadString", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeLibraryHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, id, buffer, bufferLength);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_User32::Interop_User32()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Interop_BOOLEAN::Interop_BOOLEAN(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_BOOLEAN::Interop_BOOLEAN()   {
}
constexpr ::GlobalNamespace::Interop_BOOLEAN  GlobalNamespace::Interop_BOOLEAN::FALSE{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::Interop_BOOLEAN  GlobalNamespace::Interop_BOOLEAN::TRUE{static_cast<uint8_t>(0x1u)};
// Ctor Parameters [CppParam { name: "TicksSince1601", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Interop_LongFileTime::Interop_LongFileTime(int64_t  TicksSince1601) noexcept  {
this->TicksSince1601 = TicksSince1601;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_LongFileTime::Interop_LongFileTime()   {
}
// Ctor Parameters [CppParam { name: "Length", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaximumLength", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Buffer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Interop_UNICODE_STRING::Interop_UNICODE_STRING(uint16_t  Length, uint16_t  MaximumLength, ::System::IntPtr  Buffer) noexcept  {
this->Length = Length;
this->MaximumLength = MaximumLength;
this->Buffer = Buffer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_UNICODE_STRING::Interop_UNICODE_STRING()   {
}
//  Writing Method size for method: ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION.get_FileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION::*)()>(&::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION::get_FileName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815c1e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION>(),
                        {"get_FileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION.GetNextInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION* (*)(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*)>(&::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION::GetNextInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815c1e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION>(),
                        {"GetNextInfo", {}, {::i2c::type_of<::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::ReadOnlySpan_1<char16_t> GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION::get_FileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION>(),
                        {"get_FileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(*this, ___internal_method);
}
inline ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION* GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION::GetNextInfo(::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION>(),
                        {"GetNextInfo", {}, {::i2c::type_of<::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION*>(nullptr, ___internal_method, info);
}
// Ctor Parameters [CppParam { name: "NextEntryOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FileIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CreationTime", ty: "::GlobalNamespace::Interop_LongFileTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastAccessTime", ty: "::GlobalNamespace::Interop_LongFileTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastWriteTime", ty: "::GlobalNamespace::Interop_LongFileTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "ChangeTime", ty: "::GlobalNamespace::Interop_LongFileTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "EndOfFile", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "AllocationSize", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FileAttributes", ty: "::System::IO::FileAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "FileNameLength", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EaSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fileName", ty: "char16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION::NtDll_Interop_FILE_FULL_DIR_INFORMATION(uint32_t  NextEntryOffset, uint32_t  FileIndex, ::GlobalNamespace::Interop_LongFileTime  CreationTime, ::GlobalNamespace::Interop_LongFileTime  LastAccessTime, ::GlobalNamespace::Interop_LongFileTime  LastWriteTime, ::GlobalNamespace::Interop_LongFileTime  ChangeTime, int64_t  EndOfFile, int64_t  AllocationSize, ::System::IO::FileAttributes  FileAttributes, uint32_t  FileNameLength, uint32_t  EaSize, char16_t  _fileName) noexcept  {
this->NextEntryOffset = NextEntryOffset;
this->FileIndex = FileIndex;
this->CreationTime = CreationTime;
this->LastAccessTime = LastAccessTime;
this->LastWriteTime = LastWriteTime;
this->ChangeTime = ChangeTime;
this->EndOfFile = EndOfFile;
this->AllocationSize = AllocationSize;
this->FileAttributes = FileAttributes;
this->FileNameLength = FileNameLength;
this->EaSize = EaSize;
this->_fileName = _fileName;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NtDll_Interop_FILE_FULL_DIR_INFORMATION::NtDll_Interop_FILE_FULL_DIR_INFORMATION()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::NtDll_Interop_FILE_INFORMATION_CLASS(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::NtDll_Interop_FILE_INFORMATION_CLASS()   {
}
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileDirectoryInformation{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileFullDirectoryInformation{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileBothDirectoryInformation{static_cast<uint32_t>(0x3u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileBasicInformation{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileStandardInformation{static_cast<uint32_t>(0x5u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileInternalInformation{static_cast<uint32_t>(0x6u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileEaInformation{static_cast<uint32_t>(0x7u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileAccessInformation{static_cast<uint32_t>(0x8u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileNameInformation{static_cast<uint32_t>(0x9u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileRenameInformation{static_cast<uint32_t>(0xau)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileLinkInformation{static_cast<uint32_t>(0xbu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileNamesInformation{static_cast<uint32_t>(0xcu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileDispositionInformation{static_cast<uint32_t>(0xdu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FilePositionInformation{static_cast<uint32_t>(0xeu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileFullEaInformation{static_cast<uint32_t>(0xfu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileModeInformation{static_cast<uint32_t>(0x10u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileAlignmentInformation{static_cast<uint32_t>(0x11u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileAllInformation{static_cast<uint32_t>(0x12u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileAllocationInformation{static_cast<uint32_t>(0x13u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileEndOfFileInformation{static_cast<uint32_t>(0x14u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileAlternateNameInformation{static_cast<uint32_t>(0x15u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileStreamInformation{static_cast<uint32_t>(0x16u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FilePipeInformation{static_cast<uint32_t>(0x17u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FilePipeLocalInformation{static_cast<uint32_t>(0x18u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FilePipeRemoteInformation{static_cast<uint32_t>(0x19u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileMailslotQueryInformation{static_cast<uint32_t>(0x1au)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileMailslotSetInformation{static_cast<uint32_t>(0x1bu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileCompressionInformation{static_cast<uint32_t>(0x1cu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileObjectIdInformation{static_cast<uint32_t>(0x1du)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileCompletionInformation{static_cast<uint32_t>(0x1eu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileMoveClusterInformation{static_cast<uint32_t>(0x1fu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileQuotaInformation{static_cast<uint32_t>(0x20u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileReparsePointInformation{static_cast<uint32_t>(0x21u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileNetworkOpenInformation{static_cast<uint32_t>(0x22u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileAttributeTagInformation{static_cast<uint32_t>(0x23u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileTrackingInformation{static_cast<uint32_t>(0x24u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileIdBothDirectoryInformation{static_cast<uint32_t>(0x25u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileIdFullDirectoryInformation{static_cast<uint32_t>(0x26u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileValidDataLengthInformation{static_cast<uint32_t>(0x27u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileShortNameInformation{static_cast<uint32_t>(0x28u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileIoCompletionNotificationInformation{static_cast<uint32_t>(0x29u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileIoStatusBlockRangeInformation{static_cast<uint32_t>(0x2au)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileIoPriorityHintInformation{static_cast<uint32_t>(0x2bu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileSfioReserveInformation{static_cast<uint32_t>(0x2cu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileSfioVolumeInformation{static_cast<uint32_t>(0x2du)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileHardLinkInformation{static_cast<uint32_t>(0x2eu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileProcessIdsUsingFileInformation{static_cast<uint32_t>(0x2fu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileNormalizedNameInformation{static_cast<uint32_t>(0x30u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileNetworkPhysicalNameInformation{static_cast<uint32_t>(0x31u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileIdGlobalTxDirectoryInformation{static_cast<uint32_t>(0x32u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileIsRemoteDeviceInformation{static_cast<uint32_t>(0x33u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileUnusedInformation{static_cast<uint32_t>(0x34u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileNumaNodeInformation{static_cast<uint32_t>(0x35u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileStandardLinkInformation{static_cast<uint32_t>(0x36u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileRemoteProtocolInformation{static_cast<uint32_t>(0x37u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileRenameInformationBypassAccessCheck{static_cast<uint32_t>(0x38u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileLinkInformationBypassAccessCheck{static_cast<uint32_t>(0x39u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileVolumeNameInformation{static_cast<uint32_t>(0x3au)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileIdInformation{static_cast<uint32_t>(0x3bu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileIdExtdDirectoryInformation{static_cast<uint32_t>(0x3cu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileReplaceCompletionInformation{static_cast<uint32_t>(0x3du)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileHardLinkFullIdInformation{static_cast<uint32_t>(0x3eu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileIdExtdBothDirectoryInformation{static_cast<uint32_t>(0x3fu)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileDispositionInformationEx{static_cast<uint32_t>(0x40u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileRenameInformationEx{static_cast<uint32_t>(0x41u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileRenameInformationExBypassAccessCheck{static_cast<uint32_t>(0x42u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileDesiredStorageClassInformation{static_cast<uint32_t>(0x43u)};
constexpr ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS::FileStatInformation{static_cast<uint32_t>(0x44u)};
constexpr uint32_t& GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS::__cordl_internal_get_Status()  {
return this->___Status;
}
constexpr uint32_t const& GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS::__cordl_internal_get_Status() const {
return this->___Status;
}
constexpr void GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS::__cordl_internal_set_Status(uint32_t  value)  {
this->___Status = value;
}
constexpr ::System::IntPtr& GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS::__cordl_internal_get_Pointer()  {
return this->___Pointer;
}
constexpr ::System::IntPtr const& GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS::__cordl_internal_get_Pointer() const {
return this->___Pointer;
}
constexpr void GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS::__cordl_internal_set_Pointer(::System::IntPtr  value)  {
this->___Pointer = value;
}
// Ctor Parameters [CppParam { name: "Status", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Pointer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS(uint32_t  Status, ::System::IntPtr  Pointer) noexcept  {
this->Status = Status;
this->Pointer = Pointer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS()   {
}
// Ctor Parameters [CppParam { name: "Status", ty: "::GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS", modifiers: "", def_value: Some("{}") }, CppParam { name: "Information", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK::NtDll_Interop_IO_STATUS_BLOCK(::GlobalNamespace::IO_STATUS_BLOCK_NtDll_Interop_IO_STATUS  Status, ::System::IntPtr  Information) noexcept  {
this->Status = Status;
this->Information = Information;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK::NtDll_Interop_IO_STATUS_BLOCK()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NtDll_Interop_ObjectAttributes::NtDll_Interop_ObjectAttributes(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NtDll_Interop_ObjectAttributes::NtDll_Interop_ObjectAttributes()   {
}
constexpr ::GlobalNamespace::NtDll_Interop_ObjectAttributes  GlobalNamespace::NtDll_Interop_ObjectAttributes::OBJ_INHERIT{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::NtDll_Interop_ObjectAttributes  GlobalNamespace::NtDll_Interop_ObjectAttributes::OBJ_PERMANENT{static_cast<uint32_t>(0x10u)};
constexpr ::GlobalNamespace::NtDll_Interop_ObjectAttributes  GlobalNamespace::NtDll_Interop_ObjectAttributes::OBJ_EXCLUSIVE{static_cast<uint32_t>(0x20u)};
constexpr ::GlobalNamespace::NtDll_Interop_ObjectAttributes  GlobalNamespace::NtDll_Interop_ObjectAttributes::OBJ_CASE_INSENSITIVE{static_cast<uint32_t>(0x40u)};
constexpr ::GlobalNamespace::NtDll_Interop_ObjectAttributes  GlobalNamespace::NtDll_Interop_ObjectAttributes::OBJ_OPENIF{static_cast<uint32_t>(0x80u)};
constexpr ::GlobalNamespace::NtDll_Interop_ObjectAttributes  GlobalNamespace::NtDll_Interop_ObjectAttributes::OBJ_OPENLINK{static_cast<uint32_t>(0x100u)};
//  Writing Method size for method: ::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES::*)(::GlobalNamespace::Interop_UNICODE_STRING*, ::GlobalNamespace::NtDll_Interop_ObjectAttributes, ::System::IntPtr)>(&::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815c8cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Interop_UNICODE_STRING*>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_ObjectAttributes>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES::_ctor(::GlobalNamespace::Interop_UNICODE_STRING*  objectName, ::GlobalNamespace::NtDll_Interop_ObjectAttributes  attributes, ::System::IntPtr  rootDirectory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Interop_UNICODE_STRING*>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_ObjectAttributes>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, objectName, attributes, rootDirectory);
}
// Ctor Parameters [CppParam { name: "Length", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RootDirectory", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "ObjectName", ty: "::GlobalNamespace::Interop_UNICODE_STRING*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Attributes", ty: "::GlobalNamespace::NtDll_Interop_ObjectAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "SecurityDescriptor", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SecurityQualityOfService", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES::NtDll_Interop_OBJECT_ATTRIBUTES(uint32_t  Length, ::System::IntPtr  RootDirectory, ::GlobalNamespace::Interop_UNICODE_STRING*  ObjectName, ::GlobalNamespace::NtDll_Interop_ObjectAttributes  Attributes, void*  SecurityDescriptor, void*  SecurityQualityOfService) noexcept  {
this->Length = Length;
this->RootDirectory = RootDirectory;
this->ObjectName = ObjectName;
this->Attributes = Attributes;
this->SecurityDescriptor = SecurityDescriptor;
this->SecurityQualityOfService = SecurityQualityOfService;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES::NtDll_Interop_OBJECT_ATTRIBUTES()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NtDll_Interop_CreateDisposition::NtDll_Interop_CreateDisposition(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NtDll_Interop_CreateDisposition::NtDll_Interop_CreateDisposition()   {
}
constexpr ::GlobalNamespace::NtDll_Interop_CreateDisposition  GlobalNamespace::NtDll_Interop_CreateDisposition::FILE_SUPERSEDE{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateDisposition  GlobalNamespace::NtDll_Interop_CreateDisposition::FILE_OPEN{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateDisposition  GlobalNamespace::NtDll_Interop_CreateDisposition::FILE_CREATE{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateDisposition  GlobalNamespace::NtDll_Interop_CreateDisposition::FILE_OPEN_IF{static_cast<uint32_t>(0x3u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateDisposition  GlobalNamespace::NtDll_Interop_CreateDisposition::FILE_OVERWRITE{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateDisposition  GlobalNamespace::NtDll_Interop_CreateDisposition::FILE_OVERWRITE_IF{static_cast<uint32_t>(0x5u)};
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions::NtDll_Interop_CreateOptions(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions::NtDll_Interop_CreateOptions()   {
}
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_DIRECTORY_FILE{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_WRITE_THROUGH{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_SEQUENTIAL_ONLY{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_NO_INTERMEDIATE_BUFFERING{static_cast<uint32_t>(0x8u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_SYNCHRONOUS_IO_ALERT{static_cast<uint32_t>(0x10u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_SYNCHRONOUS_IO_NONALERT{static_cast<uint32_t>(0x20u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_NON_DIRECTORY_FILE{static_cast<uint32_t>(0x40u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_CREATE_TREE_CONNECTION{static_cast<uint32_t>(0x80u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_COMPLETE_IF_OPLOCKED{static_cast<uint32_t>(0x100u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_NO_EA_KNOWLEDGE{static_cast<uint32_t>(0x200u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_RANDOM_ACCESS{static_cast<uint32_t>(0x800u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_DELETE_ON_CLOSE{static_cast<uint32_t>(0x1000u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_OPEN_BY_FILE_ID{static_cast<uint32_t>(0x2000u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_OPEN_FOR_BACKUP_INTENT{static_cast<uint32_t>(0x4000u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_NO_COMPRESSION{static_cast<uint32_t>(0x8000u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_OPEN_REQUIRING_OPLOCK{static_cast<uint32_t>(0x10000u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_DISALLOW_EXCLUSIVE{static_cast<uint32_t>(0x20000u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_SESSION_AWARE{static_cast<uint32_t>(0x40000u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_RESERVE_OPFILTER{static_cast<uint32_t>(0x100000u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_OPEN_REPARSE_POINT{static_cast<uint32_t>(0x200000u)};
constexpr ::GlobalNamespace::NtDll_Interop_CreateOptions  GlobalNamespace::NtDll_Interop_CreateOptions::FILE_OPEN_NO_RECALL{static_cast<uint32_t>(0x400000u)};
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess::NtDll_Interop_DesiredAccess(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess::NtDll_Interop_DesiredAccess()   {
}
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_READ_DATA{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_LIST_DIRECTORY{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_WRITE_DATA{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_ADD_FILE{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_APPEND_DATA{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_ADD_SUBDIRECTORY{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_CREATE_PIPE_INSTANCE{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_READ_EA{static_cast<uint32_t>(0x8u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_WRITE_EA{static_cast<uint32_t>(0x10u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_EXECUTE{static_cast<uint32_t>(0x20u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_TRAVERSE{static_cast<uint32_t>(0x20u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_DELETE_CHILD{static_cast<uint32_t>(0x40u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_READ_ATTRIBUTES{static_cast<uint32_t>(0x80u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_WRITE_ATTRIBUTES{static_cast<uint32_t>(0x100u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_ALL_ACCESS{static_cast<uint32_t>(0xf01ffu)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::DELETE{static_cast<uint32_t>(0x10000u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::READ_CONTROL{static_cast<uint32_t>(0x20000u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::WRITE_DAC{static_cast<uint32_t>(0x40000u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::WRITE_OWNER{static_cast<uint32_t>(0x80000u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::SYNCHRONIZE{static_cast<uint32_t>(0x100000u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::STANDARD_RIGHTS_READ{static_cast<uint32_t>(0x20000u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::STANDARD_RIGHTS_WRITE{static_cast<uint32_t>(0x20000u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::STANDARD_RIGHTS_EXECUTE{static_cast<uint32_t>(0x20000u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_GENERIC_READ{static_cast<uint32_t>(0x80000000u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_GENERIC_WRITE{static_cast<uint32_t>(0x40000000u)};
constexpr ::GlobalNamespace::NtDll_Interop_DesiredAccess  GlobalNamespace::NtDll_Interop_DesiredAccess::FILE_GENERIC_EXECUTE{static_cast<uint32_t>(0x20000000u)};
//  Writing Method size for method: ::GlobalNamespace::Interop_NtDll.NtCreateFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::IntPtr>, ::GlobalNamespace::NtDll_Interop_DesiredAccess, ::by_ref<::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES>, ::by_ref<::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK>, int64_t*, ::System::IO::FileAttributes, ::System::IO::FileShare, ::GlobalNamespace::NtDll_Interop_CreateDisposition, ::GlobalNamespace::NtDll_Interop_CreateOptions, void*, uint32_t)>(&::GlobalNamespace::Interop_NtDll::NtCreateFile)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1815c8a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_NtDll*>(),
                        {"NtCreateFile", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_DesiredAccess>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK>>(), ::i2c::type_of<int64_t*>(), ::i2c::type_of<::System::IO::FileAttributes>(), ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_CreateDisposition>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_CreateOptions>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_NtDll.CreateFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int32_t,::System::IntPtr> (*)(::System::ReadOnlySpan_1<char16_t>, ::System::IntPtr, ::GlobalNamespace::NtDll_Interop_CreateDisposition, ::GlobalNamespace::NtDll_Interop_DesiredAccess, ::System::IO::FileShare, ::System::IO::FileAttributes, ::GlobalNamespace::NtDll_Interop_CreateOptions, ::GlobalNamespace::NtDll_Interop_ObjectAttributes)>(&::GlobalNamespace::Interop_NtDll::CreateFile)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1815c8820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_NtDll*>(),
                        {"CreateFile", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_CreateDisposition>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_DesiredAccess>(), ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::System::IO::FileAttributes>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_CreateOptions>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_ObjectAttributes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_NtDll.NtQueryDirectoryFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::by_ref<::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK>, ::System::IntPtr, uint32_t, ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS, ::GlobalNamespace::Interop_BOOLEAN, ::GlobalNamespace::Interop_UNICODE_STRING*, ::GlobalNamespace::Interop_BOOLEAN)>(&::GlobalNamespace::Interop_NtDll::NtQueryDirectoryFile)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1815c8b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_NtDll*>(),
                        {"NtQueryDirectoryFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS>(), ::i2c::type_of<::GlobalNamespace::Interop_BOOLEAN>(), ::i2c::type_of<::GlobalNamespace::Interop_UNICODE_STRING*>(), ::i2c::type_of<::GlobalNamespace::Interop_BOOLEAN>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_NtDll.RtlNtStatusToDosError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int32_t)>(&::GlobalNamespace::Interop_NtDll::RtlNtStatusToDosError)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815c8c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_NtDll*>(),
                        {"RtlNtStatusToDosError", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Interop_NtDll::NtCreateFile(::by_ref<::System::IntPtr>  FileHandle, ::GlobalNamespace::NtDll_Interop_DesiredAccess  DesiredAccess, ::by_ref<::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES>  ObjectAttributes, ::by_ref<::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK>  IoStatusBlock, int64_t*  AllocationSize, ::System::IO::FileAttributes  FileAttributes, ::System::IO::FileShare  ShareAccess, ::GlobalNamespace::NtDll_Interop_CreateDisposition  CreateDisposition, ::GlobalNamespace::NtDll_Interop_CreateOptions  CreateOptions, void*  EaBuffer, uint32_t  EaLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_NtDll*>(),
                        {"NtCreateFile", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_DesiredAccess>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NtDll_Interop_OBJECT_ATTRIBUTES>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK>>(), ::i2c::type_of<int64_t*>(), ::i2c::type_of<::System::IO::FileAttributes>(), ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_CreateDisposition>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_CreateOptions>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, FileHandle, DesiredAccess, ObjectAttributes, IoStatusBlock, AllocationSize, FileAttributes, ShareAccess, CreateDisposition, CreateOptions, EaBuffer, EaLength);
}
inline ::System::ValueTuple_2<int32_t,::System::IntPtr> GlobalNamespace::Interop_NtDll::CreateFile(::System::ReadOnlySpan_1<char16_t>  path, ::System::IntPtr  rootDirectory, ::GlobalNamespace::NtDll_Interop_CreateDisposition  createDisposition, ::GlobalNamespace::NtDll_Interop_DesiredAccess  desiredAccess, ::System::IO::FileShare  shareAccess, ::System::IO::FileAttributes  fileAttributes, ::GlobalNamespace::NtDll_Interop_CreateOptions  createOptions, ::GlobalNamespace::NtDll_Interop_ObjectAttributes  objectAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_NtDll*>(),
                        {"CreateFile", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_CreateDisposition>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_DesiredAccess>(), ::i2c::type_of<::System::IO::FileShare>(), ::i2c::type_of<::System::IO::FileAttributes>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_CreateOptions>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_ObjectAttributes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,::System::IntPtr>>(nullptr, ___internal_method, path, rootDirectory, createDisposition, desiredAccess, shareAccess, fileAttributes, createOptions, objectAttributes);
}
inline int32_t GlobalNamespace::Interop_NtDll::NtQueryDirectoryFile(::System::IntPtr  FileHandle, ::System::IntPtr  Event, ::System::IntPtr  ApcRoutine, ::System::IntPtr  ApcContext, ::by_ref<::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK>  IoStatusBlock, ::System::IntPtr  FileInformation, uint32_t  Length, ::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS  FileInformationClass, ::GlobalNamespace::Interop_BOOLEAN  ReturnSingleEntry, ::GlobalNamespace::Interop_UNICODE_STRING*  FileName, ::GlobalNamespace::Interop_BOOLEAN  RestartScan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_NtDll*>(),
                        {"NtQueryDirectoryFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NtDll_Interop_IO_STATUS_BLOCK>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::NtDll_Interop_FILE_INFORMATION_CLASS>(), ::i2c::type_of<::GlobalNamespace::Interop_BOOLEAN>(), ::i2c::type_of<::GlobalNamespace::Interop_UNICODE_STRING*>(), ::i2c::type_of<::GlobalNamespace::Interop_BOOLEAN>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, FileHandle, Event, ApcRoutine, ApcContext, IoStatusBlock, FileInformation, Length, FileInformationClass, ReturnSingleEntry, FileName, RestartScan);
}
inline uint32_t GlobalNamespace::Interop_NtDll::RtlNtStatusToDosError(int32_t  Status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_NtDll*>(),
                        {"RtlNtStatusToDosError", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, Status);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_NtDll::Interop_NtDll()   {
}
//  Writing Method size for method: ::GlobalNamespace::Interop_Advapi32.RegCloseKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::Interop_Advapi32::RegCloseKey)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815c0500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegCloseKey", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Advapi32.RegEnumKeyEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, int32_t, ::ArrayW<char16_t>, ::by_ref<int32_t>, ::ArrayW<int32_t>, ::by_ref<::System::Text::StringBuilder*>, ::ArrayW<int32_t>, ::ArrayW<int64_t>)>(&::GlobalNamespace::Interop_Advapi32::RegEnumKeyEx)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1815c0580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegEnumKeyEx", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Advapi32.RegOpenKeyEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::StringW, int32_t, int32_t, ::by_ref<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>)>(&::GlobalNamespace::Interop_Advapi32::RegOpenKeyEx)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1815c0710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegOpenKeyEx", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Advapi32.RegQueryInfoKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::by_ref<::System::Text::StringBuilder*>, ::ArrayW<int32_t>, ::System::IntPtr, ::by_ref<int32_t>, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::by_ref<int32_t>, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::GlobalNamespace::Interop_Advapi32::RegQueryInfoKey)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1815c0860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegQueryInfoKey", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Advapi32.RegQueryValueEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::StringW, ::ArrayW<int32_t>, ::by_ref<int32_t>, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>)>(&::GlobalNamespace::Interop_Advapi32::RegQueryValueEx)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1815c0ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegQueryValueEx", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Advapi32.RegQueryValueEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::StringW, ::ArrayW<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::Interop_Advapi32::RegQueryValueEx)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1815c0a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegQueryValueEx", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Advapi32.RegQueryValueEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::StringW, ::ArrayW<int32_t>, ::by_ref<int32_t>, ::by_ref<int64_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::Interop_Advapi32::RegQueryValueEx)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1815c0bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegQueryValueEx", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Advapi32.RegQueryValueEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::StringW, ::ArrayW<int32_t>, ::by_ref<int32_t>, ::by_ref<::ArrayW<char16_t>>, ::by_ref<int32_t>)>(&::GlobalNamespace::Interop_Advapi32::RegQueryValueEx)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1815c0e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegQueryValueEx", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<char16_t>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Interop_Advapi32::RegCloseKey(::System::IntPtr  hKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegCloseKey", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hKey);
}
inline int32_t GlobalNamespace::Interop_Advapi32::RegEnumKeyEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, int32_t  dwIndex, ::ArrayW<char16_t>  lpName, ::by_ref<int32_t>  lpcbName, ::ArrayW<int32_t>  lpReserved, ::by_ref<::System::Text::StringBuilder*>  lpClass, ::ArrayW<int32_t>  lpcbClass, ::ArrayW<int64_t>  lpftLastWriteTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegEnumKeyEx", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hKey, dwIndex, lpName, lpcbName, lpReserved, lpClass, lpcbClass, lpftLastWriteTime);
}
inline int32_t GlobalNamespace::Interop_Advapi32::RegOpenKeyEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, ::StringW  lpSubKey, int32_t  ulOptions, int32_t  samDesired, ::by_ref<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>  hkResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegOpenKeyEx", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hKey, lpSubKey, ulOptions, samDesired, hkResult);
}
inline int32_t GlobalNamespace::Interop_Advapi32::RegQueryInfoKey(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, ::by_ref<::System::Text::StringBuilder*>  lpClass, ::ArrayW<int32_t>  lpcbClass, ::System::IntPtr  lpReserved_MustBeZero, ::by_ref<int32_t>  lpcSubKeys, ::ArrayW<int32_t>  lpcbMaxSubKeyLen, ::ArrayW<int32_t>  lpcbMaxClassLen, ::by_ref<int32_t>  lpcValues, ::ArrayW<int32_t>  lpcbMaxValueNameLen, ::ArrayW<int32_t>  lpcbMaxValueLen, ::ArrayW<int32_t>  lpcbSecurityDescriptor, ::ArrayW<int32_t>  lpftLastWriteTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegQueryInfoKey", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<::by_ref<::System::Text::StringBuilder*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hKey, lpClass, lpcbClass, lpReserved_MustBeZero, lpcSubKeys, lpcbMaxSubKeyLen, lpcbMaxClassLen, lpcValues, lpcbMaxValueNameLen, lpcbMaxValueLen, lpcbSecurityDescriptor, lpftLastWriteTime);
}
inline int32_t GlobalNamespace::Interop_Advapi32::RegQueryValueEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, ::StringW  lpValueName, ::ArrayW<int32_t>  lpReserved, ::by_ref<int32_t>  lpType, ::by_ref<::ArrayW<uint8_t>>  lpData, ::by_ref<int32_t>  lpcbData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegQueryValueEx", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
}
inline int32_t GlobalNamespace::Interop_Advapi32::RegQueryValueEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, ::StringW  lpValueName, ::ArrayW<int32_t>  lpReserved, ::by_ref<int32_t>  lpType, ::by_ref<int32_t>  lpData, ::by_ref<int32_t>  lpcbData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegQueryValueEx", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
}
inline int32_t GlobalNamespace::Interop_Advapi32::RegQueryValueEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, ::StringW  lpValueName, ::ArrayW<int32_t>  lpReserved, ::by_ref<int32_t>  lpType, ::by_ref<int64_t>  lpData, ::by_ref<int32_t>  lpcbData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegQueryValueEx", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
}
inline int32_t GlobalNamespace::Interop_Advapi32::RegQueryValueEx(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hKey, ::StringW  lpValueName, ::ArrayW<int32_t>  lpReserved, ::by_ref<int32_t>  lpType, ::by_ref<::ArrayW<char16_t>>  lpData, ::by_ref<int32_t>  lpcbData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_Advapi32*>(),
                        {"RegQueryValueEx", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<char16_t>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_Advapi32::Interop_Advapi32()   {
}
//  Writing Method size for method: ::GlobalNamespace::Interop.GetRandomBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t)>(&::GlobalNamespace::Interop::GetRandomBytes)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1815c1f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"GetRandomBytes", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Interop::GetRandomBytes(uint8_t*  buffer, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop*>(),
                        {"GetRandomBytes", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, length);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop::Interop()   {
}
