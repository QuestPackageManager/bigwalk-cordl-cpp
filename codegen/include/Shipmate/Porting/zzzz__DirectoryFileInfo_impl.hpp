#pragma once
// IWYU pragma private; include "Shipmate/Porting/DirectoryFileInfo.hpp"
#include "Shipmate/Porting/zzzz__EFileEntryType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Porting/zzzz__DirectoryFileInfo_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::DirectoryFileInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::DirectoryFileInfo::*)()>(&::Shipmate::Porting::DirectoryFileInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::DirectoryFileInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Shipmate::Porting::EFileEntryType& Shipmate::Porting::DirectoryFileInfo::__cordl_internal_get_fileType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileType;
}
constexpr ::Shipmate::Porting::EFileEntryType const& Shipmate::Porting::DirectoryFileInfo::__cordl_internal_get_fileType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileType;
}
constexpr void Shipmate::Porting::DirectoryFileInfo::__cordl_internal_set_fileType(::Shipmate::Porting::EFileEntryType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileType = value;
}
constexpr ::StringW& Shipmate::Porting::DirectoryFileInfo::__cordl_internal_get_fileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName;
}
constexpr ::StringW const& Shipmate::Porting::DirectoryFileInfo::__cordl_internal_get_fileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName;
}
constexpr void Shipmate::Porting::DirectoryFileInfo::__cordl_internal_set_fileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileName = value;
}
inline void Shipmate::Porting::DirectoryFileInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::DirectoryFileInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::DirectoryFileInfo* Shipmate::Porting::DirectoryFileInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::DirectoryFileInfo*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::DirectoryFileInfo::DirectoryFileInfo()   {
}
