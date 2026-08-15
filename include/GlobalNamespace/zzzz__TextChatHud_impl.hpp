#pragma once
// IWYU pragma private; include "GlobalNamespace/TextChatHud.hpp"
#include "GlobalNamespace/zzzz__TextChatHudBlip_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextChatHud_def.hpp"
#include "GlobalNamespace/zzzz__TextChatHud_def.hpp"
#include "GlobalNamespace/zzzz__TextChatSource_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TextChatHud_BlipDirectionType::TextChatHud_BlipDirectionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextChatHud_BlipDirectionType::TextChatHud_BlipDirectionType()   {
}
constexpr ::GlobalNamespace::TextChatHud_BlipDirectionType  GlobalNamespace::TextChatHud_BlipDirectionType::NoBlip{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TextChatHud_BlipDirectionType  GlobalNamespace::TextChatHud_BlipDirectionType::Left{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TextChatHud_BlipDirectionType  GlobalNamespace::TextChatHud_BlipDirectionType::Right{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TextChatHud_BlipDirectionType  GlobalNamespace::TextChatHud_BlipDirectionType::Up{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::TextChatHud_BlipDirectionType  GlobalNamespace::TextChatHud_BlipDirectionType::Down{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TextChatHud_BlipIcon::TextChatHud_BlipIcon(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextChatHud_BlipIcon::TextChatHud_BlipIcon()   {
}
constexpr ::GlobalNamespace::TextChatHud_BlipIcon  GlobalNamespace::TextChatHud_BlipIcon::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TextChatHud_BlipIcon  GlobalNamespace::TextChatHud_BlipIcon::Player{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TextChatHud_BlipIcon  GlobalNamespace::TextChatHud_BlipIcon::Radio{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TextChatHud_BlipIcon  GlobalNamespace::TextChatHud_BlipIcon::Typing{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::TextChatHud_BlipGroup.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatHud_BlipGroup::*)(::GlobalNamespace::TextChatSource*)>(&::GlobalNamespace::TextChatHud_BlipGroup::Add)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180445c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud_BlipGroup*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::TextChatSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatHud_BlipGroup.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatHud_BlipGroup::*)(::GlobalNamespace::TextChatSource*)>(&::GlobalNamespace::TextChatHud_BlipGroup::Remove)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180445e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud_BlipGroup*>(),
                        {"Remove", {}, {::i2c::type_of<::GlobalNamespace::TextChatSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatHud_BlipGroup.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatHud_BlipGroup::*)()>(&::GlobalNamespace::TextChatHud_BlipGroup::Refresh)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180445ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud_BlipGroup*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatHud_BlipGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatHud_BlipGroup::*)()>(&::GlobalNamespace::TextChatHud_BlipGroup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud_BlipGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TextChatHudBlip>>& GlobalNamespace::TextChatHud_BlipGroup::__cordl_internal_get_blips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blips;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TextChatHudBlip>> const& GlobalNamespace::TextChatHud_BlipGroup::__cordl_internal_get_blips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blips;
}
constexpr void GlobalNamespace::TextChatHud_BlipGroup::__cordl_internal_set_blips(::ArrayW<::UnityW<::GlobalNamespace::TextChatHudBlip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blips = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>*& GlobalNamespace::TextChatHud_BlipGroup::__cordl_internal_get__sources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sources;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>* const& GlobalNamespace::TextChatHud_BlipGroup::__cordl_internal_get__sources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sources;
}
constexpr void GlobalNamespace::TextChatHud_BlipGroup::__cordl_internal_set__sources(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sources = value;
}
constexpr bool& GlobalNamespace::TextChatHud_BlipGroup::__cordl_internal_get__isDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDirty;
}
constexpr bool const& GlobalNamespace::TextChatHud_BlipGroup::__cordl_internal_get__isDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDirty;
}
constexpr void GlobalNamespace::TextChatHud_BlipGroup::__cordl_internal_set__isDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDirty = value;
}
inline void GlobalNamespace::TextChatHud_BlipGroup::Add(::GlobalNamespace::TextChatSource*  textChatSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud_BlipGroup*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::TextChatSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textChatSource);
}
inline void GlobalNamespace::TextChatHud_BlipGroup::Remove(::GlobalNamespace::TextChatSource*  textChatSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud_BlipGroup*>(),
                        {"Remove", {}, {::i2c::type_of<::GlobalNamespace::TextChatSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textChatSource);
}
inline void GlobalNamespace::TextChatHud_BlipGroup::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud_BlipGroup*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatHud_BlipGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud_BlipGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextChatHud_BlipGroup* GlobalNamespace::TextChatHud_BlipGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextChatHud_BlipGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextChatHud_BlipGroup::TextChatHud_BlipGroup()   {
}
// Ctor Parameters [CppParam { name: "textChatSource", ty: "::UnityW<::GlobalNamespace::TextChatSource>", modifiers: "", def_value: Some("{}") }, CppParam { name: "blipDirectionType", ty: "::GlobalNamespace::TextChatHud_BlipDirectionType", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TextChatHud_HudSource::TextChatHud_HudSource(::UnityW<::GlobalNamespace::TextChatSource>  textChatSource, ::GlobalNamespace::TextChatHud_BlipDirectionType  blipDirectionType) noexcept  {
this->textChatSource = textChatSource;
this->blipDirectionType = blipDirectionType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextChatHud_HudSource::TextChatHud_HudSource()   {
}
//  Writing Method size for method: ::GlobalNamespace::TextChatHud.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatHud::*)()>(&::GlobalNamespace::TextChatHud::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804564d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatHud.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatHud::*)()>(&::GlobalNamespace::TextChatHud::Update)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x180456890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatHud.GetBlipGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TextChatHud_BlipGroup* (::GlobalNamespace::TextChatHud::*)(::GlobalNamespace::TextChatHud_BlipDirectionType)>(&::GlobalNamespace::TextChatHud::GetBlipGroup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180456520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud*>(),
                        {"GetBlipGroup", {}, {::i2c::type_of<::GlobalNamespace::TextChatHud_BlipDirectionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatHud.OnDirectionChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatHud::*)(::GlobalNamespace::TextChatSource*, ::GlobalNamespace::TextChatHud_BlipDirectionType, ::GlobalNamespace::TextChatHud_BlipDirectionType)>(&::GlobalNamespace::TextChatHud::OnDirectionChange)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180456700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud*>(),
                        {"OnDirectionChange", {}, {::i2c::type_of<::GlobalNamespace::TextChatSource*>(), ::i2c::type_of<::GlobalNamespace::TextChatHud_BlipDirectionType>(), ::i2c::type_of<::GlobalNamespace::TextChatHud_BlipDirectionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatHud.GetBlipType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TextChatHud_BlipDirectionType (*)(::GlobalNamespace::TextChatSource*, ::GlobalNamespace::TextChatHud_BlipDirectionType)>(&::GlobalNamespace::TextChatHud::GetBlipType)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180456550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud*>(),
                        {"GetBlipType", {}, {::i2c::type_of<::GlobalNamespace::TextChatSource*>(), ::i2c::type_of<::GlobalNamespace::TextChatHud_BlipDirectionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatHud._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatHud::*)()>(&::GlobalNamespace::TextChatHud::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TextChatHud_BlipGroup*& GlobalNamespace::TextChatHud::__cordl_internal_get_blipGroupLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blipGroupLeft;
}
constexpr ::GlobalNamespace::TextChatHud_BlipGroup* const& GlobalNamespace::TextChatHud::__cordl_internal_get_blipGroupLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blipGroupLeft;
}
constexpr void GlobalNamespace::TextChatHud::__cordl_internal_set_blipGroupLeft(::GlobalNamespace::TextChatHud_BlipGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blipGroupLeft = value;
}
constexpr ::GlobalNamespace::TextChatHud_BlipGroup*& GlobalNamespace::TextChatHud::__cordl_internal_get_blipGroupRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blipGroupRight;
}
constexpr ::GlobalNamespace::TextChatHud_BlipGroup* const& GlobalNamespace::TextChatHud::__cordl_internal_get_blipGroupRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blipGroupRight;
}
constexpr void GlobalNamespace::TextChatHud::__cordl_internal_set_blipGroupRight(::GlobalNamespace::TextChatHud_BlipGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blipGroupRight = value;
}
constexpr ::GlobalNamespace::TextChatHud_BlipGroup*& GlobalNamespace::TextChatHud::__cordl_internal_get_blipGroupUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blipGroupUp;
}
constexpr ::GlobalNamespace::TextChatHud_BlipGroup* const& GlobalNamespace::TextChatHud::__cordl_internal_get_blipGroupUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blipGroupUp;
}
constexpr void GlobalNamespace::TextChatHud::__cordl_internal_set_blipGroupUp(::GlobalNamespace::TextChatHud_BlipGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blipGroupUp = value;
}
constexpr ::GlobalNamespace::TextChatHud_BlipGroup*& GlobalNamespace::TextChatHud::__cordl_internal_get_blipGroupDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blipGroupDown;
}
constexpr ::GlobalNamespace::TextChatHud_BlipGroup* const& GlobalNamespace::TextChatHud::__cordl_internal_get_blipGroupDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blipGroupDown;
}
constexpr void GlobalNamespace::TextChatHud::__cordl_internal_set_blipGroupDown(::GlobalNamespace::TextChatHud_BlipGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blipGroupDown = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatHud_HudSource>*& GlobalNamespace::TextChatHud::__cordl_internal_get__hudSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hudSources;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatHud_HudSource>* const& GlobalNamespace::TextChatHud::__cordl_internal_get__hudSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hudSources;
}
constexpr void GlobalNamespace::TextChatHud::__cordl_internal_set__hudSources(::System::Collections::Generic::List_1<::GlobalNamespace::TextChatHud_HudSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hudSources = value;
}
constexpr bool& GlobalNamespace::TextChatHud::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::TextChatHud::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::TextChatHud::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::TextChatHud::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatHud::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextChatHud_BlipGroup* GlobalNamespace::TextChatHud::GetBlipGroup(::GlobalNamespace::TextChatHud_BlipDirectionType  blipDirectionType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud*>(),
                        {"GetBlipGroup", {}, {::i2c::type_of<::GlobalNamespace::TextChatHud_BlipDirectionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextChatHud_BlipGroup*>(this, ___internal_method, blipDirectionType);
}
inline void GlobalNamespace::TextChatHud::OnDirectionChange(::GlobalNamespace::TextChatSource*  source, ::GlobalNamespace::TextChatHud_BlipDirectionType  oldDirectionType, ::GlobalNamespace::TextChatHud_BlipDirectionType  newDirectionType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud*>(),
                        {"OnDirectionChange", {}, {::i2c::type_of<::GlobalNamespace::TextChatSource*>(), ::i2c::type_of<::GlobalNamespace::TextChatHud_BlipDirectionType>(), ::i2c::type_of<::GlobalNamespace::TextChatHud_BlipDirectionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, oldDirectionType, newDirectionType);
}
inline ::GlobalNamespace::TextChatHud_BlipDirectionType GlobalNamespace::TextChatHud::GetBlipType(::GlobalNamespace::TextChatSource*  source, ::GlobalNamespace::TextChatHud_BlipDirectionType  oldDirectionType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud*>(),
                        {"GetBlipType", {}, {::i2c::type_of<::GlobalNamespace::TextChatSource*>(), ::i2c::type_of<::GlobalNamespace::TextChatHud_BlipDirectionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextChatHud_BlipDirectionType>(nullptr, ___internal_method, source, oldDirectionType);
}
inline void GlobalNamespace::TextChatHud::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatHud*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextChatHud* GlobalNamespace::TextChatHud::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextChatHud*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextChatHud::TextChatHud()   {
}
