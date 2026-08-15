#pragma once
// IWYU pragma private; include "Steamworks/SteamUGCDetails_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__ERemoteStoragePublishedFileVisibility_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__EWorkshopFileType_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__UGCHandle_t_impl.hpp"
#include "Steamworks/zzzz__SteamUGCDetails_t_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamUGCDetails_t.get_m_rgchTitle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamUGCDetails_t::*)()>(&::Steamworks::SteamUGCDetails_t::get_m_rgchTitle)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180552c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"get_m_rgchTitle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGCDetails_t.set_m_rgchTitle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamUGCDetails_t::*)(::StringW)>(&::Steamworks::SteamUGCDetails_t::set_m_rgchTitle)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x180581fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"set_m_rgchTitle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGCDetails_t.get_m_rgchDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamUGCDetails_t::*)()>(&::Steamworks::SteamUGCDetails_t::get_m_rgchDescription)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180581d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"get_m_rgchDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGCDetails_t.set_m_rgchDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamUGCDetails_t::*)(::StringW)>(&::Steamworks::SteamUGCDetails_t::set_m_rgchDescription)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180581e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"set_m_rgchDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGCDetails_t.get_m_rgchTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamUGCDetails_t::*)()>(&::Steamworks::SteamUGCDetails_t::get_m_rgchTags)> {
  constexpr static std::size_t size = 0x1860;
  constexpr static std::size_t addrs = 0x1805a4e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"get_m_rgchTags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGCDetails_t.set_m_rgchTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamUGCDetails_t::*)(::StringW)>(&::Steamworks::SteamUGCDetails_t::set_m_rgchTags)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180581f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"set_m_rgchTags", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGCDetails_t.get_m_pchFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamUGCDetails_t::*)()>(&::Steamworks::SteamUGCDetails_t::get_m_pchFileName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180581c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"get_m_pchFileName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGCDetails_t.set_m_pchFileName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamUGCDetails_t::*)(::StringW)>(&::Steamworks::SteamUGCDetails_t::set_m_pchFileName)> {
  constexpr static std::size_t size = 0x32a0;
  constexpr static std::size_t addrs = 0x18057e9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"set_m_pchFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGCDetails_t.get_m_rgchURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::SteamUGCDetails_t::*)()>(&::Steamworks::SteamUGCDetails_t::get_m_rgchURL)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180581e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"get_m_rgchURL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::SteamUGCDetails_t.set_m_rgchURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::SteamUGCDetails_t::*)(::StringW)>(&::Steamworks::SteamUGCDetails_t::set_m_rgchURL)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18054f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"set_m_rgchURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::SteamUGCDetails_t::get_m_rgchTitle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"get_m_rgchTitle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::SteamUGCDetails_t::set_m_rgchTitle(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"set_m_rgchTitle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::SteamUGCDetails_t::get_m_rgchDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"get_m_rgchDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::SteamUGCDetails_t::set_m_rgchDescription(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"set_m_rgchDescription", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::SteamUGCDetails_t::get_m_rgchTags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"get_m_rgchTags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::SteamUGCDetails_t::set_m_rgchTags(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"set_m_rgchTags", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::SteamUGCDetails_t::get_m_pchFileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"get_m_pchFileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::SteamUGCDetails_t::set_m_pchFileName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"set_m_pchFileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Steamworks::SteamUGCDetails_t::get_m_rgchURL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"get_m_rgchURL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::SteamUGCDetails_t::set_m_rgchURL(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamUGCDetails_t>(),
                        {"set_m_rgchURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eFileType", ty: "::Steamworks::EWorkshopFileType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nCreatorAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nConsumerAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchTitle_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchDescription_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulSteamIDOwner", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rtimeCreated", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rtimeUpdated", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rtimeAddedToUserList", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eVisibility", ty: "::Steamworks::ERemoteStoragePublishedFileVisibility", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bBanned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bAcceptedForUse", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bTagsTruncated", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchTags_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_hFile", ty: "::Steamworks::UGCHandle_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_hPreviewFile", ty: "::Steamworks::UGCHandle_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pchFileName_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nFileSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPreviewFileSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchURL_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unVotesUp", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unVotesDown", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flScore", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unNumChildren", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamUGCDetails_t::SteamUGCDetails_t(::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::EResult  m_eResult, ::Steamworks::EWorkshopFileType  m_eFileType, ::Steamworks::AppId_t  m_nCreatorAppID, ::Steamworks::AppId_t  m_nConsumerAppID, ::ArrayW<uint8_t>  m_rgchTitle_, ::ArrayW<uint8_t>  m_rgchDescription_, uint64_t  m_ulSteamIDOwner, uint32_t  m_rtimeCreated, uint32_t  m_rtimeUpdated, uint32_t  m_rtimeAddedToUserList, ::Steamworks::ERemoteStoragePublishedFileVisibility  m_eVisibility, bool  m_bBanned, bool  m_bAcceptedForUse, bool  m_bTagsTruncated, ::ArrayW<uint8_t>  m_rgchTags_, ::Steamworks::UGCHandle_t  m_hFile, ::Steamworks::UGCHandle_t  m_hPreviewFile, ::ArrayW<uint8_t>  m_pchFileName_, int32_t  m_nFileSize, int32_t  m_nPreviewFileSize, ::ArrayW<uint8_t>  m_rgchURL_, uint32_t  m_unVotesUp, uint32_t  m_unVotesDown, float_t  m_flScore, uint32_t  m_unNumChildren) noexcept  {
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_eResult = m_eResult;
this->m_eFileType = m_eFileType;
this->m_nCreatorAppID = m_nCreatorAppID;
this->m_nConsumerAppID = m_nConsumerAppID;
this->m_rgchTitle_ = m_rgchTitle_;
this->m_rgchDescription_ = m_rgchDescription_;
this->m_ulSteamIDOwner = m_ulSteamIDOwner;
this->m_rtimeCreated = m_rtimeCreated;
this->m_rtimeUpdated = m_rtimeUpdated;
this->m_rtimeAddedToUserList = m_rtimeAddedToUserList;
this->m_eVisibility = m_eVisibility;
this->m_bBanned = m_bBanned;
this->m_bAcceptedForUse = m_bAcceptedForUse;
this->m_bTagsTruncated = m_bTagsTruncated;
this->m_rgchTags_ = m_rgchTags_;
this->m_hFile = m_hFile;
this->m_hPreviewFile = m_hPreviewFile;
this->m_pchFileName_ = m_pchFileName_;
this->m_nFileSize = m_nFileSize;
this->m_nPreviewFileSize = m_nPreviewFileSize;
this->m_rgchURL_ = m_rgchURL_;
this->m_unVotesUp = m_unVotesUp;
this->m_unVotesDown = m_unVotesDown;
this->m_flScore = m_flScore;
this->m_unNumChildren = m_unNumChildren;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamUGCDetails_t::SteamUGCDetails_t()   {
}
