#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioPicker.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioPicker_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioPicker_def.hpp"
#include "GlobalNamespace/zzzz__ISoundBankable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioPicker_PickerInputType::AudioPicker_PickerInputType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioPicker_PickerInputType::AudioPicker_PickerInputType()   {
}
constexpr ::GlobalNamespace::AudioPicker_PickerInputType  GlobalNamespace::AudioPicker_PickerInputType::Int{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioPicker_PickerInputType  GlobalNamespace::AudioPicker_PickerInputType::Float{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::AudioPicker_PickerItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPicker_PickerItem::*)()>(&::GlobalNamespace::AudioPicker_PickerItem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPicker_PickerItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_get_Asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_get_Asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr void GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_set_Asset(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Asset = value;
}
constexpr float_t& GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_get_FloatMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FloatMin;
}
constexpr float_t const& GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_get_FloatMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FloatMin;
}
constexpr void GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_set_FloatMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FloatMin = value;
}
constexpr float_t& GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_get_FloatMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FloatMax;
}
constexpr float_t const& GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_get_FloatMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FloatMax;
}
constexpr void GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_set_FloatMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FloatMax = value;
}
constexpr int32_t& GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_get_IntMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntMin;
}
constexpr int32_t const& GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_get_IntMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntMin;
}
constexpr void GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_set_IntMin(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IntMin = value;
}
constexpr int32_t& GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_get_IntMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntMax;
}
constexpr int32_t const& GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_get_IntMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IntMax;
}
constexpr void GlobalNamespace::AudioPicker_PickerItem::__cordl_internal_set_IntMax(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IntMax = value;
}
inline void GlobalNamespace::AudioPicker_PickerItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPicker_PickerItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioPicker_PickerItem* GlobalNamespace::AudioPicker_PickerItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioPicker_PickerItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioPicker_PickerItem::AudioPicker_PickerItem()   {
}
//  Writing Method size for method: ::GlobalNamespace::AudioPicker.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPicker::*)()>(&::GlobalNamespace::AudioPicker::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180487770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPicker*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPicker.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPicker::*)()>(&::GlobalNamespace::AudioPicker::OnValidate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180487890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPicker*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPicker.Pick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioAsset> (::GlobalNamespace::AudioPicker::*)(int32_t)>(&::GlobalNamespace::AudioPicker::Pick)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180487b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPicker*>(),
                        {"Pick", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPicker.Pick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioAsset> (::GlobalNamespace::AudioPicker::*)(float_t)>(&::GlobalNamespace::AudioPicker::Pick)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804879a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPicker*>(),
                        {"Pick", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioPicker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioPicker::*)()>(&::GlobalNamespace::AudioPicker::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180445be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPicker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioPicker_PickerInputType& GlobalNamespace::AudioPicker::__cordl_internal_get_InputType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputType;
}
constexpr ::GlobalNamespace::AudioPicker_PickerInputType const& GlobalNamespace::AudioPicker::__cordl_internal_get_InputType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InputType;
}
constexpr void GlobalNamespace::AudioPicker::__cordl_internal_set_InputType(::GlobalNamespace::AudioPicker_PickerInputType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InputType = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::AudioPicker::__cordl_internal_get_DefaultAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultAsset;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::AudioPicker::__cordl_internal_get_DefaultAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultAsset;
}
constexpr void GlobalNamespace::AudioPicker::__cordl_internal_set_DefaultAsset(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultAsset = value;
}
constexpr bool& GlobalNamespace::AudioPicker::__cordl_internal_get_ClampInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClampInput;
}
constexpr bool const& GlobalNamespace::AudioPicker::__cordl_internal_get_ClampInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClampInput;
}
constexpr void GlobalNamespace::AudioPicker::__cordl_internal_set_ClampInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClampInput = value;
}
constexpr ::ArrayW<::GlobalNamespace::AudioPicker_PickerItem*>& GlobalNamespace::AudioPicker::__cordl_internal_get_Items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
constexpr ::ArrayW<::GlobalNamespace::AudioPicker_PickerItem*> const& GlobalNamespace::AudioPicker::__cordl_internal_get_Items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
constexpr void GlobalNamespace::AudioPicker::__cordl_internal_set_Items(::ArrayW<::GlobalNamespace::AudioPicker_PickerItem*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Items = value;
}
constexpr int32_t& GlobalNamespace::AudioPicker::__cordl_internal_get__minInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minInt;
}
constexpr int32_t const& GlobalNamespace::AudioPicker::__cordl_internal_get__minInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minInt;
}
constexpr void GlobalNamespace::AudioPicker::__cordl_internal_set__minInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minInt = value;
}
constexpr int32_t& GlobalNamespace::AudioPicker::__cordl_internal_get__maxInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxInt;
}
constexpr int32_t const& GlobalNamespace::AudioPicker::__cordl_internal_get__maxInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxInt;
}
constexpr void GlobalNamespace::AudioPicker::__cordl_internal_set__maxInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxInt = value;
}
constexpr float_t& GlobalNamespace::AudioPicker::__cordl_internal_get__minFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minFloat;
}
constexpr float_t const& GlobalNamespace::AudioPicker::__cordl_internal_get__minFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minFloat;
}
constexpr void GlobalNamespace::AudioPicker::__cordl_internal_set__minFloat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minFloat = value;
}
constexpr float_t& GlobalNamespace::AudioPicker::__cordl_internal_get__maxFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxFloat;
}
constexpr float_t const& GlobalNamespace::AudioPicker::__cordl_internal_get__maxFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxFloat;
}
constexpr void GlobalNamespace::AudioPicker::__cordl_internal_set__maxFloat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxFloat = value;
}
inline void GlobalNamespace::AudioPicker::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPicker*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioPicker::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPicker*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AudioAsset> GlobalNamespace::AudioPicker::Pick(int32_t  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPicker*>(),
                        {"Pick", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioAsset>>(this, ___internal_method, input);
}
inline ::UnityW<::GlobalNamespace::AudioAsset> GlobalNamespace::AudioPicker::Pick(float_t  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPicker*>(),
                        {"Pick", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioAsset>>(this, ___internal_method, input);
}
inline void GlobalNamespace::AudioPicker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioPicker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioPicker* GlobalNamespace::AudioPicker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioPicker*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISoundBankable"
constexpr  GlobalNamespace::AudioPicker::operator ::GlobalNamespace::ISoundBankable*() noexcept {
return static_cast<::GlobalNamespace::ISoundBankable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISoundBankable"
constexpr ::GlobalNamespace::ISoundBankable* GlobalNamespace::AudioPicker::i___GlobalNamespace__ISoundBankable() noexcept {
return static_cast<::GlobalNamespace::ISoundBankable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioPicker::AudioPicker()   {
}
