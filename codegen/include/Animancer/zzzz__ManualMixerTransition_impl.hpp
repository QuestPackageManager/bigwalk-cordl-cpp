#pragma once
// IWYU pragma private; include "Animancer/ManualMixerTransition.hpp"
#include "Animancer/zzzz__ManualMixerTransition_1_impl.hpp"
#include "Animancer/zzzz__ManualMixerTransition_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "Animancer/zzzz__ManualMixerState_def.hpp"
//  Writing Method size for method: ::Animancer::ManualMixerTransition.CreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ManualMixerState* (::Animancer::ManualMixerTransition::*)()>(&::Animancer::ManualMixerTransition::CreateState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180311a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerTransition*>(),
                    {::i2c::class_of<::Animancer::ManualMixerTransition*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerTransition.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerTransition::*)(::Animancer::ManualMixerTransition*)>(&::Animancer::ManualMixerTransition::CopyFrom)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::ManualMixerTransition*>(),
                    {::i2c::class_of<::Animancer::ManualMixerTransition*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ManualMixerTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ManualMixerTransition::*)()>(&::Animancer::ManualMixerTransition::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerTransition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Animancer::ManualMixerState* Animancer::ManualMixerTransition::CreateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerTransition*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ManualMixerState*>(this, ___internal_method);
}
inline void Animancer::ManualMixerTransition::CopyFrom(::Animancer::ManualMixerTransition*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerTransition*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::ManualMixerTransition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerTransition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::ManualMixerTransition* Animancer::ManualMixerTransition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ManualMixerTransition*>());
}
/// @brief Convert operator to "::Animancer::ManualMixerState_ITransition"
constexpr  Animancer::ManualMixerTransition::operator ::Animancer::ManualMixerState_ITransition*() noexcept {
return static_cast<::Animancer::ManualMixerState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ManualMixerState_ITransition"
constexpr ::Animancer::ManualMixerState_ITransition* Animancer::ManualMixerTransition::i___Animancer__ManualMixerState_ITransition() noexcept {
return static_cast<::Animancer::ManualMixerState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ManualMixerState*>"
constexpr  Animancer::ManualMixerTransition::operator ::Animancer::ITransition_1<::Animancer::ManualMixerState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::ManualMixerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ManualMixerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ManualMixerState*>* Animancer::ManualMixerTransition::i___Animancer__ITransition_1___Animancer__ManualMixerState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::ManualMixerState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::ManualMixerTransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::ManualMixerTransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::ManualMixerTransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::ManualMixerTransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::ManualMixerTransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::ManualMixerTransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ManualMixerTransition*>"
constexpr  Animancer::ManualMixerTransition::operator ::Animancer::ICopyable_1<::Animancer::ManualMixerTransition*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ManualMixerTransition*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ManualMixerTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ManualMixerTransition*>* Animancer::ManualMixerTransition::i___Animancer__ICopyable_1___Animancer__ManualMixerTransition__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ManualMixerTransition*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::ManualMixerTransition::ManualMixerTransition()   {
}
