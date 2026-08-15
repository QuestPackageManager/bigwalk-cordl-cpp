#pragma once
// IWYU pragma private; include "Animancer/LinearMixerTransition.hpp"
#include "Animancer/zzzz__MixerTransition_2_impl.hpp"
#include "Animancer/zzzz__LinearMixerTransition_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "Animancer/zzzz__LinearMixerState_def.hpp"
//  Writing Method size for method: ::Animancer::LinearMixerTransition.get_ExtrapolateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::Animancer::LinearMixerTransition::*)()>(&::Animancer::LinearMixerTransition::get_ExtrapolateSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030dd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerTransition*>(),
                        {"get_ExtrapolateSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerTransition.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::LinearMixerTransition::*)()>(&::Animancer::LinearMixerTransition::get_IsValid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18030dd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerTransition*>(),
                    {::i2c::class_of<::Animancer::LinearMixerTransition*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerTransition.CreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::LinearMixerState* (::Animancer::LinearMixerTransition::*)()>(&::Animancer::LinearMixerTransition::CreateState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18030da90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerTransition*>(),
                    {::i2c::class_of<::Animancer::LinearMixerTransition*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerTransition.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::LinearMixerTransition::*)(::Animancer::AnimancerState*)>(&::Animancer::LinearMixerTransition::Apply)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18030d960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerTransition*>(),
                    {::i2c::class_of<::Animancer::LinearMixerTransition*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerTransition.SortByThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::LinearMixerTransition::*)()>(&::Animancer::LinearMixerTransition::SortByThresholds)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18030db00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerTransition*>(),
                        {"SortByThresholds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerTransition.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::LinearMixerTransition::*)(::Animancer::LinearMixerTransition*)>(&::Animancer::LinearMixerTransition::CopyFrom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18030da40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::LinearMixerTransition*>(),
                    {::i2c::class_of<::Animancer::LinearMixerTransition*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::LinearMixerTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::LinearMixerTransition::*)()>(&::Animancer::LinearMixerTransition::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030dd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerTransition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Animancer::LinearMixerTransition::__cordl_internal_get__ExtrapolateSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExtrapolateSpeed;
}
constexpr bool const& Animancer::LinearMixerTransition::__cordl_internal_get__ExtrapolateSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ExtrapolateSpeed;
}
constexpr void Animancer::LinearMixerTransition::__cordl_internal_set__ExtrapolateSpeed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ExtrapolateSpeed = value;
}
inline ::by_ref<bool> Animancer::LinearMixerTransition::get_ExtrapolateSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerTransition*>(),
                        {"get_ExtrapolateSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(this, ___internal_method);
}
inline bool Animancer::LinearMixerTransition::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerTransition*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Animancer::LinearMixerState* Animancer::LinearMixerTransition::CreateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerTransition*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::LinearMixerState*>(this, ___internal_method);
}
inline void Animancer::LinearMixerTransition::Apply(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerTransition*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::LinearMixerTransition::SortByThresholds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerTransition*>(),
                        {"SortByThresholds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::LinearMixerTransition::CopyFrom(::Animancer::LinearMixerTransition*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::LinearMixerTransition*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::LinearMixerTransition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::LinearMixerTransition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::LinearMixerTransition* Animancer::LinearMixerTransition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::LinearMixerTransition*>());
}
/// @brief Convert operator to "::Animancer::LinearMixerState_ITransition"
constexpr  Animancer::LinearMixerTransition::operator ::Animancer::LinearMixerState_ITransition*() noexcept {
return static_cast<::Animancer::LinearMixerState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::LinearMixerState_ITransition"
constexpr ::Animancer::LinearMixerState_ITransition* Animancer::LinearMixerTransition::i___Animancer__LinearMixerState_ITransition() noexcept {
return static_cast<::Animancer::LinearMixerState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::LinearMixerState*>"
constexpr  Animancer::LinearMixerTransition::operator ::Animancer::ITransition_1<::Animancer::LinearMixerState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::LinearMixerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::LinearMixerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::LinearMixerState*>* Animancer::LinearMixerTransition::i___Animancer__ITransition_1___Animancer__LinearMixerState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::LinearMixerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::LinearMixerTransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::LinearMixerTransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::LinearMixerTransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::LinearMixerTransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::LinearMixerTransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::LinearMixerTransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::LinearMixerTransition*>"
constexpr  Animancer::LinearMixerTransition::operator ::Animancer::ICopyable_1<::Animancer::LinearMixerTransition*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::LinearMixerTransition*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::LinearMixerTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::LinearMixerTransition*>* Animancer::LinearMixerTransition::i___Animancer__ICopyable_1___Animancer__LinearMixerTransition__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::LinearMixerTransition*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::LinearMixerTransition::LinearMixerTransition()   {
}
