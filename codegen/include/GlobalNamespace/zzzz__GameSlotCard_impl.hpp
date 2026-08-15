#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSlotCard.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
#include "GlobalNamespace/zzzz__GameSlotCard_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__ManagedButton_def.hpp"
#include "GlobalNamespace/zzzz__SaveData_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameSlotCard.PlaySlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSlotCard::*)()>(&::GlobalNamespace::GameSlotCard::PlaySlot)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804329f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSlotCard*>(),
                        {"PlaySlot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSlotCard.SetHightlightImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSlotCard::*)(int32_t)>(&::GlobalNamespace::GameSlotCard::SetHightlightImage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180432ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSlotCard*>(),
                        {"SetHightlightImage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSlotCard.SetSaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSlotCard::*)(::GlobalNamespace::SaveData*)>(&::GlobalNamespace::GameSlotCard::SetSaveData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180432b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSlotCard*>(),
                        {"SetSaveData", {}, {::i2c::type_of<::GlobalNamespace::SaveData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameSlotCard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameSlotCard::*)()>(&::GlobalNamespace::GameSlotCard::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSlotCard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::GameSlotCard::__cordl_internal_get_slotNameField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotNameField;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::GameSlotCard::__cordl_internal_get_slotNameField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slotNameField;
}
constexpr void GlobalNamespace::GameSlotCard::__cordl_internal_set_slotNameField(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slotNameField = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GameSlotCard::__cordl_internal_get_timeLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLabel;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GameSlotCard::__cordl_internal_get_timeLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLabel;
}
constexpr void GlobalNamespace::GameSlotCard::__cordl_internal_set_timeLabel(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLabel = value;
}
constexpr ::GlobalNamespace::SaveData*& GlobalNamespace::GameSlotCard::__cordl_internal_get_saveData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveData;
}
constexpr ::GlobalNamespace::SaveData* const& GlobalNamespace::GameSlotCard::__cordl_internal_get_saveData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveData;
}
constexpr void GlobalNamespace::GameSlotCard::__cordl_internal_set_saveData(::GlobalNamespace::SaveData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveData = value;
}
constexpr ::UnityW<::GlobalNamespace::ManagedButton>& GlobalNamespace::GameSlotCard::__cordl_internal_get_selectable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectable;
}
constexpr ::UnityW<::GlobalNamespace::ManagedButton> const& GlobalNamespace::GameSlotCard::__cordl_internal_get_selectable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectable;
}
constexpr void GlobalNamespace::GameSlotCard::__cordl_internal_set_selectable(::UnityW<::GlobalNamespace::ManagedButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectable = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::GameSlotCard::__cordl_internal_get_highlightImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highlightImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::GameSlotCard::__cordl_internal_get_highlightImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highlightImage;
}
constexpr void GlobalNamespace::GameSlotCard::__cordl_internal_set_highlightImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highlightImage = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>>& GlobalNamespace::GameSlotCard::__cordl_internal_get_sprites()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sprites;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>> const& GlobalNamespace::GameSlotCard::__cordl_internal_get_sprites() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sprites;
}
constexpr void GlobalNamespace::GameSlotCard::__cordl_internal_set_sprites(::ArrayW<::UnityW<::UnityEngine::Sprite>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sprites = value;
}
inline void GlobalNamespace::GameSlotCard::PlaySlot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSlotCard*>(),
                        {"PlaySlot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameSlotCard::SetHightlightImage(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSlotCard*>(),
                        {"SetHightlightImage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::GameSlotCard::SetSaveData(::GlobalNamespace::SaveData*  saveData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSlotCard*>(),
                        {"SetSaveData", {}, {::i2c::type_of<::GlobalNamespace::SaveData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saveData);
}
inline void GlobalNamespace::GameSlotCard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameSlotCard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameSlotCard* GlobalNamespace::GameSlotCard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameSlotCard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameSlotCard::GameSlotCard()   {
}
