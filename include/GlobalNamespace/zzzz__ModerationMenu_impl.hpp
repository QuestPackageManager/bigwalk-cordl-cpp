#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ModerationMenu_def.hpp"
#include "GlobalNamespace/zzzz__ModerationPlayerCard_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModerationMenu.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ModerationMenu> (*)()>(&::GlobalNamespace::ModerationMenu::get_instance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180437f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationMenu.SetSilencedIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::GlobalNamespace::ModerationMenu::SetSilencedIdentifier)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180437e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"SetSilencedIdentifier", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationMenu.GetIsSilencedByIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::ModerationMenu::GetIsSilencedByIdentifier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180437490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"GetIsSilencedByIdentifier", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationMenu.SetEncounteredIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::GlobalNamespace::ModerationMenu::SetEncounteredIdentifier)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180437d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"SetEncounteredIdentifier", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationMenu.GetIsEncounteredByIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::ModerationMenu::GetIsEncounteredByIdentifier)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180437430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"GetIsEncounteredByIdentifier", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationMenu::*)()>(&::GlobalNamespace::ModerationMenu::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180437520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationMenu.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationMenu::*)()>(&::GlobalNamespace::ModerationMenu::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804374f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationMenu.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationMenu::*)()>(&::GlobalNamespace::ModerationMenu::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180437520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationMenu.RefreshCards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationMenu::*)()>(&::GlobalNamespace::ModerationMenu::RefreshCards)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x180437530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"RefreshCards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationMenu.ActionBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationMenu::*)()>(&::GlobalNamespace::ModerationMenu::ActionBack)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180435490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"ActionBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationMenu::*)()>(&::GlobalNamespace::ModerationMenu::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180437eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModerationPlayerCard>>*& GlobalNamespace::ModerationMenu::__cordl_internal_get_moderationPlayerCards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationPlayerCards;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModerationPlayerCard>>* const& GlobalNamespace::ModerationMenu::__cordl_internal_get_moderationPlayerCards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationPlayerCards;
}
constexpr void GlobalNamespace::ModerationMenu::__cordl_internal_set_moderationPlayerCards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModerationPlayerCard>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moderationPlayerCards = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::ModerationMenu::__cordl_internal_get_silencedIdentifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___silencedIdentifiers;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::ModerationMenu::__cordl_internal_get_silencedIdentifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___silencedIdentifiers;
}
constexpr void GlobalNamespace::ModerationMenu::__cordl_internal_set_silencedIdentifiers(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___silencedIdentifiers = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::ModerationMenu::__cordl_internal_get_encounteredIdentifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encounteredIdentifiers;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::ModerationMenu::__cordl_internal_get_encounteredIdentifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encounteredIdentifiers;
}
constexpr void GlobalNamespace::ModerationMenu::__cordl_internal_set_encounteredIdentifiers(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encounteredIdentifiers = value;
}
inline ::UnityW<::GlobalNamespace::ModerationMenu> GlobalNamespace::ModerationMenu::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ModerationMenu>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ModerationMenu::SetSilencedIdentifier(::StringW  identifier, bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"SetSilencedIdentifier", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identifier, active);
}
inline bool GlobalNamespace::ModerationMenu::GetIsSilencedByIdentifier(::StringW  identifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"GetIsSilencedByIdentifier", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, identifier);
}
inline void GlobalNamespace::ModerationMenu::SetEncounteredIdentifier(::StringW  identifier, bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"SetEncounteredIdentifier", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identifier, active);
}
inline bool GlobalNamespace::ModerationMenu::GetIsEncounteredByIdentifier(::StringW  identifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"GetIsEncounteredByIdentifier", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, identifier);
}
inline void GlobalNamespace::ModerationMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationMenu::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationMenu::RefreshCards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"RefreshCards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationMenu::ActionBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {"ActionBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModerationMenu* GlobalNamespace::ModerationMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModerationMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModerationMenu::ModerationMenu()   {
}
