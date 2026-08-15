#pragma once
// IWYU pragma private; include "GlobalNamespace/HostMenu.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HostMenu_def.hpp"
#include "GlobalNamespace/zzzz__GameSlotCard_def.hpp"
#include "GlobalNamespace/zzzz__HostMenu_def.hpp"
#include "GlobalNamespace/zzzz__SaveData_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HostMenu___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenu___c::*)()>(&::GlobalNamespace::HostMenu___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenu___c._FillWithSlotCards_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::HostMenu___c::*)(::GlobalNamespace::SaveData*, ::GlobalNamespace::SaveData*)>(&::GlobalNamespace::HostMenu___c::_FillWithSlotCards_b__7_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804444b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu___c*>(),
                        {"<FillWithSlotCards>b__7_0", {}, {::i2c::type_of<::GlobalNamespace::SaveData*>(), ::i2c::type_of<::GlobalNamespace::SaveData*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HostMenu___c::setStaticF___9(::GlobalNamespace::HostMenu___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HostMenu___c*, "<>9", ::GlobalNamespace::HostMenu___c*>(std::forward<::GlobalNamespace::HostMenu___c*>(value));
}
inline ::GlobalNamespace::HostMenu___c* GlobalNamespace::HostMenu___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HostMenu___c*, "<>9", ::GlobalNamespace::HostMenu___c*>();
}
inline void GlobalNamespace::HostMenu___c::setStaticF___9__7_0(::System::Comparison_1<::GlobalNamespace::SaveData*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::SaveData*>*, "<>9__7_0", ::GlobalNamespace::HostMenu___c*>(std::forward<::System::Comparison_1<::GlobalNamespace::SaveData*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::SaveData*>* GlobalNamespace::HostMenu___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::SaveData*>*, "<>9__7_0", ::GlobalNamespace::HostMenu___c*>();
}
inline void GlobalNamespace::HostMenu___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::HostMenu___c::_FillWithSlotCards_b__7_0(::GlobalNamespace::SaveData*  a, ::GlobalNamespace::SaveData*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu___c*>(),
                        {"<FillWithSlotCards>b__7_0", {}, {::i2c::type_of<::GlobalNamespace::SaveData*>(), ::i2c::type_of<::GlobalNamespace::SaveData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::HostMenu___c* GlobalNamespace::HostMenu___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HostMenu___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HostMenu___c::HostMenu___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::HostMenu.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenu::*)()>(&::GlobalNamespace::HostMenu::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804334e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenu.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenu::*)()>(&::GlobalNamespace::HostMenu::Start)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180433eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenu.Back
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenu::*)()>(&::GlobalNamespace::HostMenu::Back)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180431150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"Back", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenu.StartNewGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenu::*)()>(&::GlobalNamespace::HostMenu::StartNewGame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804340a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"StartNewGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenu.FillWithSlotCards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenu::*)()>(&::GlobalNamespace::HostMenu::FillWithSlotCards)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180433eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"FillWithSlotCards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenu.AddGameSlotCard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameSlotCard> (::GlobalNamespace::HostMenu::*)()>(&::GlobalNamespace::HostMenu::AddGameSlotCard)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180433740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"AddGameSlotCard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenu.GoToTitleMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenu::*)()>(&::GlobalNamespace::HostMenu::GoToTitleMenu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180431150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"GoToTitleMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenu.GoToLoadingMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenu::*)()>(&::GlobalNamespace::HostMenu::GoToLoadingMenu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180431440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"GoToLoadingMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenu.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenu::*)()>(&::GlobalNamespace::HostMenu::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180434030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenu.TidyTempCard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenu::*)()>(&::GlobalNamespace::HostMenu::TidyTempCard)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180434030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"TidyTempCard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HostMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HostMenu::*)()>(&::GlobalNamespace::HostMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HostMenu::__cordl_internal_get_slotCardPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotCardPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HostMenu::__cordl_internal_get_slotCardPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotCardPrefab;
}
constexpr void GlobalNamespace::HostMenu::__cordl_internal_set_slotCardPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slotCardPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HostMenu::__cordl_internal_get_slotCardParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotCardParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HostMenu::__cordl_internal_get_slotCardParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotCardParent;
}
constexpr void GlobalNamespace::HostMenu::__cordl_internal_set_slotCardParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slotCardParent = value;
}
constexpr ::UnityW<::GlobalNamespace::GameSlotCard>& GlobalNamespace::HostMenu::__cordl_internal_get_tempCard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempCard;
}
constexpr ::UnityW<::GlobalNamespace::GameSlotCard> const& GlobalNamespace::HostMenu::__cordl_internal_get_tempCard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempCard;
}
constexpr void GlobalNamespace::HostMenu::__cordl_internal_set_tempCard(::UnityW<::GlobalNamespace::GameSlotCard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempCard = value;
}
inline void GlobalNamespace::HostMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenu::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenu::Back()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"Back", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenu::StartNewGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"StartNewGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenu::FillWithSlotCards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"FillWithSlotCards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameSlotCard> GlobalNamespace::HostMenu::AddGameSlotCard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"AddGameSlotCard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameSlotCard>>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenu::GoToTitleMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"GoToTitleMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenu::GoToLoadingMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"GoToLoadingMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenu::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenu::TidyTempCard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {"TidyTempCard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HostMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HostMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HostMenu* GlobalNamespace::HostMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HostMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HostMenu::HostMenu()   {
}
