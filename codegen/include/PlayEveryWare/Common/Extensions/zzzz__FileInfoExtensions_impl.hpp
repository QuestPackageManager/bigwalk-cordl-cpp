#pragma once
// IWYU pragma private; include "PlayEveryWare/Common/Extensions/FileInfoExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/Common/Extensions/zzzz__FileInfoExtensions_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::Common::Extensions::FileInfoExtensions.ComputeSHA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IO::FileInfo*)>(&::PlayEveryWare::Common::Extensions::FileInfoExtensions::ComputeSHA)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18053f970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::FileInfoExtensions*>(),
                        {"ComputeSHA", {}, {::i2c::type_of<::System::IO::FileInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::Common::Extensions::FileInfoExtensions.LogInequalityReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::FileInfo*, ::System::IO::FileInfo*, ::StringW)>(&::PlayEveryWare::Common::Extensions::FileInfoExtensions::LogInequalityReason)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18053fba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::FileInfoExtensions*>(),
                        {"LogInequalityReason", {}, {::i2c::type_of<::System::IO::FileInfo*>(), ::i2c::type_of<::System::IO::FileInfo*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::Common::Extensions::FileInfoExtensions.AreContentsSemanticallyEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IO::FileInfo*, ::System::IO::FileInfo*)>(&::PlayEveryWare::Common::Extensions::FileInfoExtensions::AreContentsSemanticallyEqual)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x18053f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::FileInfoExtensions*>(),
                        {"AreContentsSemanticallyEqual", {}, {::i2c::type_of<::System::IO::FileInfo*>(), ::i2c::type_of<::System::IO::FileInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW PlayEveryWare::Common::Extensions::FileInfoExtensions::ComputeSHA(::System::IO::FileInfo*  fileInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::FileInfoExtensions*>(),
                        {"ComputeSHA", {}, {::i2c::type_of<::System::IO::FileInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fileInfo);
}
inline void PlayEveryWare::Common::Extensions::FileInfoExtensions::LogInequalityReason(::System::IO::FileInfo*  one, ::System::IO::FileInfo*  two, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::FileInfoExtensions*>(),
                        {"LogInequalityReason", {}, {::i2c::type_of<::System::IO::FileInfo*>(), ::i2c::type_of<::System::IO::FileInfo*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, one, two, reason);
}
inline bool PlayEveryWare::Common::Extensions::FileInfoExtensions::AreContentsSemanticallyEqual(::System::IO::FileInfo*  fileInfo, ::System::IO::FileInfo*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::Common::Extensions::FileInfoExtensions*>(),
                        {"AreContentsSemanticallyEqual", {}, {::i2c::type_of<::System::IO::FileInfo*>(), ::i2c::type_of<::System::IO::FileInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fileInfo, other);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::Common::Extensions::FileInfoExtensions::FileInfoExtensions()   {
}
