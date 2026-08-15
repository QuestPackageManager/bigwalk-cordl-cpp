#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetails.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetails_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__Attribute_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsCopyAttributeByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsCopyAttributeByKeyOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsCopyInfoOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsCopyMemberAttributeByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsCopyMemberAttributeByKeyOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsCopyMemberInfoOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsGetAttributeCountOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsGetLobbyOwnerOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsGetMemberAttributeCountOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsGetMemberByIndexOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsGetMemberCountOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsInfo_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsMemberInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyDetails::*)()>(&::Epic::OnlineServices::Lobby::LobbyDetails::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyDetails::*)(::System::IntPtr)>(&::Epic::OnlineServices::Lobby::LobbyDetails::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails.CopyAttributeByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyDetails::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>)>(&::Epic::OnlineServices::Lobby::LobbyDetails::CopyAttributeByIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180506770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"CopyAttributeByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails.CopyAttributeByKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyDetails::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>)>(&::Epic::OnlineServices::Lobby::LobbyDetails::CopyAttributeByKey)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805067f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"CopyAttributeByKey", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails.CopyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyDetails::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyInfoOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>>)>(&::Epic::OnlineServices::Lobby::LobbyDetails::CopyInfo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805068b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"CopyInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails.CopyMemberAttributeByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyDetails::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>)>(&::Epic::OnlineServices::Lobby::LobbyDetails::CopyMemberAttributeByIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180506930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"CopyMemberAttributeByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails.CopyMemberAttributeByKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyDetails::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByKeyOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>)>(&::Epic::OnlineServices::Lobby::LobbyDetails::CopyMemberAttributeByKey)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805069f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"CopyMemberAttributeByKey", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByKeyOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails.CopyMemberInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::Lobby::LobbyDetails::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions>, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>>)>(&::Epic::OnlineServices::Lobby::LobbyDetails::CopyMemberInfo)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180506ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"CopyMemberInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails.GetAttributeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Lobby::LobbyDetails::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetAttributeCountOptions>)>(&::Epic::OnlineServices::Lobby::LobbyDetails::GetAttributeCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180506b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"GetAttributeCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetAttributeCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails.GetLobbyOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Lobby::LobbyDetails::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetLobbyOwnerOptions>)>(&::Epic::OnlineServices::Lobby::LobbyDetails::GetLobbyOwner)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180506bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"GetLobbyOwner", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetLobbyOwnerOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails.GetMemberAttributeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Lobby::LobbyDetails::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions>)>(&::Epic::OnlineServices::Lobby::LobbyDetails::GetMemberAttributeCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180506c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"GetMemberAttributeCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails.GetMemberByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Lobby::LobbyDetails::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions>)>(&::Epic::OnlineServices::Lobby::LobbyDetails::GetMemberByIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180506ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"GetMemberByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails.GetMemberCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Lobby::LobbyDetails::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberCountOptions>)>(&::Epic::OnlineServices::Lobby::LobbyDetails::GetMemberCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180506d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"GetMemberCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberCountOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetails.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyDetails::*)()>(&::Epic::OnlineServices::Lobby::LobbyDetails::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180506d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LobbyDetails::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyDetails::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyDetails::CopyAttributeByIndex(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>  outAttribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"CopyAttributeByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outAttribute);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyDetails::CopyAttributeByKey(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>  outAttribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"CopyAttributeByKey", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyAttributeByKeyOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outAttribute);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyDetails::CopyInfo(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>>  outLobbyDetailsInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"CopyInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outLobbyDetailsInfo);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyDetails::CopyMemberAttributeByIndex(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>  outAttribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"CopyMemberAttributeByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByIndexOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outAttribute);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyDetails::CopyMemberAttributeByKey(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByKeyOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>  outAttribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"CopyMemberAttributeByKey", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberAttributeByKeyOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::Attribute>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outAttribute);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::Lobby::LobbyDetails::CopyMemberInfo(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions>  options, ::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>>  outLobbyDetailsMemberInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"CopyMemberInfo", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outLobbyDetailsMemberInfo);
}
inline uint32_t Epic::OnlineServices::Lobby::LobbyDetails::GetAttributeCount(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetAttributeCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"GetAttributeCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetAttributeCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Lobby::LobbyDetails::GetLobbyOwner(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetLobbyOwnerOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"GetLobbyOwner", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetLobbyOwnerOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Lobby::LobbyDetails::GetMemberAttributeCount(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"GetMemberAttributeCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Lobby::LobbyDetails::GetMemberByIndex(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"GetMemberByIndex", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberByIndexOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(this, ___internal_method, options);
}
inline uint32_t Epic::OnlineServices::Lobby::LobbyDetails::GetMemberCount(::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberCountOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"GetMemberCount", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberCountOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::Lobby::LobbyDetails::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetails*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Epic::OnlineServices::Lobby::LobbyDetails* Epic::OnlineServices::Lobby::LobbyDetails::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Lobby::LobbyDetails*>());
}
inline ::Epic::OnlineServices::Lobby::LobbyDetails* Epic::OnlineServices::Lobby::LobbyDetails::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Lobby::LobbyDetails*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyDetails::LobbyDetails()   {
}
