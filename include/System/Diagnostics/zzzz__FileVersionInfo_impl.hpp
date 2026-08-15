#pragma once
// IWYU pragma private; include "System/Diagnostics/FileVersionInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__FileVersionInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::FileVersionInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::FileVersionInfo::*)()>(&::System::Diagnostics::FileVersionInfo::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181dd9b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::FileVersionInfo.get_FileBuildPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::FileVersionInfo::*)()>(&::System::Diagnostics::FileVersionInfo::get_FileBuildPart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"get_FileBuildPart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::FileVersionInfo.get_FileMajorPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::FileVersionInfo::*)()>(&::System::Diagnostics::FileVersionInfo::get_FileMajorPart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"get_FileMajorPart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::FileVersionInfo.get_FileMinorPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::FileVersionInfo::*)()>(&::System::Diagnostics::FileVersionInfo::get_FileMinorPart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180bb89c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"get_FileMinorPart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::FileVersionInfo.get_FileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::FileVersionInfo::*)()>(&::System::Diagnostics::FileVersionInfo::get_FileName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"get_FileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::FileVersionInfo.get_ProductVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::FileVersionInfo::*)()>(&::System::Diagnostics::FileVersionInfo::get_ProductVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"get_ProductVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::FileVersionInfo.GetVersionInfo_icall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::FileVersionInfo::*)(char16_t*, int32_t)>(&::System::Diagnostics::FileVersionInfo::GetVersionInfo_icall)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181dd9430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"GetVersionInfo_icall", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::FileVersionInfo.GetVersionInfo_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::FileVersionInfo::*)(::StringW)>(&::System::Diagnostics::FileVersionInfo::GetVersionInfo_internal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181dd9440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"GetVersionInfo_internal", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::FileVersionInfo.GetVersionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::FileVersionInfo* (*)(::StringW)>(&::System::Diagnostics::FileVersionInfo::GetVersionInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181dd9490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"GetVersionInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::FileVersionInfo.AppendFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW, ::ArrayW<::System::Object*>)>(&::System::Diagnostics::FileVersionInfo::AppendFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181dd9420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"AppendFormat", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::FileVersionInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::FileVersionInfo::*)()>(&::System::Diagnostics::FileVersionInfo::ToString)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x181dd9650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                    {::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_comments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comments;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_comments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comments;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_comments(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comments = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_companyname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___companyname;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_companyname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___companyname;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_companyname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___companyname = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_filedescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filedescription;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_filedescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filedescription;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_filedescription(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filedescription = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_filename()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filename;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_filename() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filename;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_filename(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filename = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_fileversion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileversion;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_fileversion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileversion;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_fileversion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileversion = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_internalname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalname;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_internalname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalname;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_internalname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalname = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_language()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___language;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_language() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___language;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_language(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___language = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_legalcopyright()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legalcopyright;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_legalcopyright() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legalcopyright;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_legalcopyright(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legalcopyright = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_legaltrademarks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legaltrademarks;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_legaltrademarks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legaltrademarks;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_legaltrademarks(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legaltrademarks = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_originalfilename()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalfilename;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_originalfilename() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalfilename;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_originalfilename(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalfilename = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_privatebuild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privatebuild;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_privatebuild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privatebuild;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_privatebuild(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___privatebuild = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_productname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productname;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_productname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productname;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_productname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productname = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_productversion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productversion;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_productversion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productversion;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_productversion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productversion = value;
}
constexpr ::StringW& System::Diagnostics::FileVersionInfo::__cordl_internal_get_specialbuild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specialbuild;
}
constexpr ::StringW const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_specialbuild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specialbuild;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_specialbuild(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specialbuild = value;
}
constexpr bool& System::Diagnostics::FileVersionInfo::__cordl_internal_get_isdebug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isdebug;
}
constexpr bool const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_isdebug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isdebug;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_isdebug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isdebug = value;
}
constexpr bool& System::Diagnostics::FileVersionInfo::__cordl_internal_get_ispatched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ispatched;
}
constexpr bool const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_ispatched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ispatched;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_ispatched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ispatched = value;
}
constexpr bool& System::Diagnostics::FileVersionInfo::__cordl_internal_get_isprerelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isprerelease;
}
constexpr bool const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_isprerelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isprerelease;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_isprerelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isprerelease = value;
}
constexpr bool& System::Diagnostics::FileVersionInfo::__cordl_internal_get_isprivatebuild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isprivatebuild;
}
constexpr bool const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_isprivatebuild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isprivatebuild;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_isprivatebuild(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isprivatebuild = value;
}
constexpr bool& System::Diagnostics::FileVersionInfo::__cordl_internal_get_isspecialbuild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isspecialbuild;
}
constexpr bool const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_isspecialbuild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isspecialbuild;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_isspecialbuild(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isspecialbuild = value;
}
constexpr int32_t& System::Diagnostics::FileVersionInfo::__cordl_internal_get_filemajorpart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filemajorpart;
}
constexpr int32_t const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_filemajorpart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filemajorpart;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_filemajorpart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filemajorpart = value;
}
constexpr int32_t& System::Diagnostics::FileVersionInfo::__cordl_internal_get_fileminorpart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileminorpart;
}
constexpr int32_t const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_fileminorpart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileminorpart;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_fileminorpart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileminorpart = value;
}
constexpr int32_t& System::Diagnostics::FileVersionInfo::__cordl_internal_get_filebuildpart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filebuildpart;
}
constexpr int32_t const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_filebuildpart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filebuildpart;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_filebuildpart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filebuildpart = value;
}
constexpr int32_t& System::Diagnostics::FileVersionInfo::__cordl_internal_get_fileprivatepart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileprivatepart;
}
constexpr int32_t const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_fileprivatepart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileprivatepart;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_fileprivatepart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileprivatepart = value;
}
constexpr int32_t& System::Diagnostics::FileVersionInfo::__cordl_internal_get_productmajorpart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productmajorpart;
}
constexpr int32_t const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_productmajorpart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productmajorpart;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_productmajorpart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productmajorpart = value;
}
constexpr int32_t& System::Diagnostics::FileVersionInfo::__cordl_internal_get_productminorpart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productminorpart;
}
constexpr int32_t const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_productminorpart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productminorpart;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_productminorpart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productminorpart = value;
}
constexpr int32_t& System::Diagnostics::FileVersionInfo::__cordl_internal_get_productbuildpart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productbuildpart;
}
constexpr int32_t const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_productbuildpart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productbuildpart;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_productbuildpart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productbuildpart = value;
}
constexpr int32_t& System::Diagnostics::FileVersionInfo::__cordl_internal_get_productprivatepart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productprivatepart;
}
constexpr int32_t const& System::Diagnostics::FileVersionInfo::__cordl_internal_get_productprivatepart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productprivatepart;
}
constexpr void System::Diagnostics::FileVersionInfo::__cordl_internal_set_productprivatepart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productprivatepart = value;
}
inline void System::Diagnostics::FileVersionInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Diagnostics::FileVersionInfo::get_FileBuildPart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"get_FileBuildPart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Diagnostics::FileVersionInfo::get_FileMajorPart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"get_FileMajorPart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Diagnostics::FileVersionInfo::get_FileMinorPart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"get_FileMinorPart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::FileVersionInfo::get_FileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"get_FileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::FileVersionInfo::get_ProductVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"get_ProductVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Diagnostics::FileVersionInfo::GetVersionInfo_icall(char16_t*  fileName, int32_t  fileName_length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"GetVersionInfo_icall", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, fileName_length);
}
inline void System::Diagnostics::FileVersionInfo::GetVersionInfo_internal(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"GetVersionInfo_internal", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName);
}
inline ::System::Diagnostics::FileVersionInfo* System::Diagnostics::FileVersionInfo::GetVersionInfo(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"GetVersionInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::FileVersionInfo*>(nullptr, ___internal_method, fileName);
}
inline void System::Diagnostics::FileVersionInfo::AppendFormat(::System::Text::StringBuilder*  sb, ::StringW  format, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(),
                        {"AppendFormat", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, format, args);
}
inline ::StringW System::Diagnostics::FileVersionInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Diagnostics::FileVersionInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Diagnostics::FileVersionInfo* System::Diagnostics::FileVersionInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::FileVersionInfo*>());
}
// Ctor Parameters []
constexpr ::System::Diagnostics::FileVersionInfo::FileVersionInfo()   {
}
