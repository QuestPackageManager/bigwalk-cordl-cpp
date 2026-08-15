#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinFriendCard.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__JoinFriendCard_def.hpp"
#include "GlobalNamespace/zzzz__JoinFriendCard_def.hpp"
#include "GlobalNamespace/zzzz__JoinMenu_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard_FriendGameInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JoinFriendCard_FriendGameInfo::*)(::GlobalNamespace::JoinFriendCard_FriendGameInfo)>(&::GlobalNamespace::JoinFriendCard_FriendGameInfo::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180432830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard_FriendGameInfo.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JoinFriendCard_FriendGameInfo::*)(::System::Object*)>(&::GlobalNamespace::JoinFriendCard_FriendGameInfo::Equals)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804328d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>(),
                    {::i2c::class_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard_FriendGameInfo.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::JoinFriendCard_FriendGameInfo::*)()>(&::GlobalNamespace::JoinFriendCard_FriendGameInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804329b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>(),
                    {::i2c::class_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::JoinFriendCard_FriendGameInfo::Equals(::GlobalNamespace::JoinFriendCard_FriendGameInfo  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::JoinFriendCard_FriendGameInfo::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::JoinFriendCard_FriendGameInfo::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>"
constexpr  GlobalNamespace::JoinFriendCard_FriendGameInfo::operator ::System::IEquatable_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>"
constexpr ::System::IEquatable_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>* GlobalNamespace::JoinFriendCard_FriendGameInfo::i___System__IEquatable_1___GlobalNamespace__JoinFriendCard_FriendGameInfo_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "joinCode", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "hostPlatformId", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::JoinFriendCard_FriendGameInfo::JoinFriendCard_FriendGameInfo(::StringW  joinCode, ::StringW  worldName, ::StringW  playerName, ::StringW  hostPlatformId) noexcept  {
this->joinCode = joinCode;
this->worldName = worldName;
this->playerName = playerName;
this->hostPlatformId = hostPlatformId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JoinFriendCard_FriendGameInfo::JoinFriendCard_FriendGameInfo()   {
}
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard.get_isEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JoinFriendCard::*)()>(&::GlobalNamespace::JoinFriendCard::get_isEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804348f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"get_isEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinFriendCard::*)(::GlobalNamespace::JoinMenu*)>(&::GlobalNamespace::JoinFriendCard::Initialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180434380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::JoinMenu*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard.IsEmptyOrMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JoinFriendCard::*)(::GlobalNamespace::JoinFriendCard_FriendGameInfo)>(&::GlobalNamespace::JoinFriendCard::IsEmptyOrMatches)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804343d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"IsEmptyOrMatches", {}, {::i2c::type_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JoinFriendCard::*)(::GlobalNamespace::JoinFriendCard_FriendGameInfo)>(&::GlobalNamespace::JoinFriendCard::Matches)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180434460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"Matches", {}, {::i2c::type_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinFriendCard::*)()>(&::GlobalNamespace::JoinFriendCard::Refresh)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180434720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard.ActionJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinFriendCard::*)()>(&::GlobalNamespace::JoinFriendCard::ActionJoin)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180434250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"ActionJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard.AddInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinFriendCard::*)(::GlobalNamespace::JoinFriendCard_FriendGameInfo)>(&::GlobalNamespace::JoinFriendCard::AddInfo)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180434290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"AddInfo", {}, {::i2c::type_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard.RemoveInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinFriendCard::*)(::GlobalNamespace::JoinFriendCard_FriendGameInfo)>(&::GlobalNamespace::JoinFriendCard::RemoveInfo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804348b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"RemoveInfo", {}, {::i2c::type_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard.Prune
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinFriendCard::*)(::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*)>(&::GlobalNamespace::JoinFriendCard::Prune)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1804344e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"Prune", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard.RefreshIfDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinFriendCard::*)()>(&::GlobalNamespace::JoinFriendCard::RefreshIfDirty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180434710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"RefreshIfDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JoinFriendCard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JoinFriendCard::*)()>(&::GlobalNamespace::JoinFriendCard::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::JoinMenu>& GlobalNamespace::JoinFriendCard::__cordl_internal_get_joinMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinMenu;
}
constexpr ::UnityW<::GlobalNamespace::JoinMenu> const& GlobalNamespace::JoinFriendCard::__cordl_internal_get_joinMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinMenu;
}
constexpr void GlobalNamespace::JoinFriendCard::__cordl_internal_set_joinMenu(::UnityW<::GlobalNamespace::JoinMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinMenu = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*& GlobalNamespace::JoinFriendCard::__cordl_internal_get_friendInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendInfos;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>* const& GlobalNamespace::JoinFriendCard::__cordl_internal_get_friendInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendInfos;
}
constexpr void GlobalNamespace::JoinFriendCard::__cordl_internal_set_friendInfos(::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendInfos = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::JoinFriendCard::__cordl_internal_get_worldField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldField;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::JoinFriendCard::__cordl_internal_get_worldField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldField;
}
constexpr void GlobalNamespace::JoinFriendCard::__cordl_internal_set_worldField(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldField = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::JoinFriendCard::__cordl_internal_get_hostField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostField;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::JoinFriendCard::__cordl_internal_get_hostField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostField;
}
constexpr void GlobalNamespace::JoinFriendCard::__cordl_internal_set_hostField(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostField = value;
}
constexpr bool& GlobalNamespace::JoinFriendCard::__cordl_internal_get_isDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDirty;
}
constexpr bool const& GlobalNamespace::JoinFriendCard::__cordl_internal_get_isDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDirty;
}
constexpr void GlobalNamespace::JoinFriendCard::__cordl_internal_set_isDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDirty = value;
}
constexpr bool& GlobalNamespace::JoinFriendCard::__cordl_internal_get_isDummy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDummy;
}
constexpr bool const& GlobalNamespace::JoinFriendCard::__cordl_internal_get_isDummy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDummy;
}
constexpr void GlobalNamespace::JoinFriendCard::__cordl_internal_set_isDummy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDummy = value;
}
constexpr bool& GlobalNamespace::JoinFriendCard::__cordl_internal_get_showJoinCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showJoinCode;
}
constexpr bool const& GlobalNamespace::JoinFriendCard::__cordl_internal_get_showJoinCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showJoinCode;
}
constexpr void GlobalNamespace::JoinFriendCard::__cordl_internal_set_showJoinCode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showJoinCode = value;
}
inline bool GlobalNamespace::JoinFriendCard::get_isEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"get_isEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::JoinFriendCard::Initialize(::GlobalNamespace::JoinMenu*  joinMenu)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::JoinMenu*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joinMenu);
}
inline bool GlobalNamespace::JoinFriendCard::IsEmptyOrMatches(::GlobalNamespace::JoinFriendCard_FriendGameInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"IsEmptyOrMatches", {}, {::i2c::type_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info);
}
inline bool GlobalNamespace::JoinFriendCard::Matches(::GlobalNamespace::JoinFriendCard_FriendGameInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"Matches", {}, {::i2c::type_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info);
}
inline void GlobalNamespace::JoinFriendCard::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoinFriendCard::ActionJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"ActionJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoinFriendCard::AddInfo(::GlobalNamespace::JoinFriendCard_FriendGameInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"AddInfo", {}, {::i2c::type_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::JoinFriendCard::RemoveInfo(::GlobalNamespace::JoinFriendCard_FriendGameInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"RemoveInfo", {}, {::i2c::type_of<::GlobalNamespace::JoinFriendCard_FriendGameInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::JoinFriendCard::Prune(::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*  externalList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"Prune", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::JoinFriendCard_FriendGameInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, externalList);
}
inline void GlobalNamespace::JoinFriendCard::RefreshIfDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {"RefreshIfDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::JoinFriendCard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JoinFriendCard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::JoinFriendCard* GlobalNamespace::JoinFriendCard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::JoinFriendCard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JoinFriendCard::JoinFriendCard()   {
}
