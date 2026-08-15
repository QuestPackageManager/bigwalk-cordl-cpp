#pragma once
// IWYU pragma private; include "Animancer/MixerParameterTween_1.hpp"
#include "Animancer/zzzz__Key_impl.hpp"
#include "Animancer/zzzz__MixerParameterTween_1_def.hpp"
#include "Animancer/zzzz__IUpdatable_def.hpp"
#include "Animancer/zzzz__Key_def.hpp"
#include "Animancer/zzzz__MixerState_1_def.hpp"
template<typename TParameter>
constexpr ::Animancer::MixerState_1<TParameter>*& Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_get__Mixer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mixer_k__BackingField;
}
template<typename TParameter>
constexpr ::Animancer::MixerState_1<TParameter>* const& Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_get__Mixer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mixer_k__BackingField;
}
template<typename TParameter>
constexpr void Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_set__Mixer_k__BackingField(::Animancer::MixerState_1<TParameter>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mixer_k__BackingField = value;
}
template<typename TParameter>
constexpr TParameter& Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_get__StartValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartValue_k__BackingField;
}
template<typename TParameter>
constexpr TParameter const& Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_get__StartValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartValue_k__BackingField;
}
template<typename TParameter>
constexpr void Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_set__StartValue_k__BackingField(TParameter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StartValue_k__BackingField = value;
}
template<typename TParameter>
constexpr TParameter& Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_get__EndValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndValue_k__BackingField;
}
template<typename TParameter>
constexpr TParameter const& Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_get__EndValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndValue_k__BackingField;
}
template<typename TParameter>
constexpr void Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_set__EndValue_k__BackingField(TParameter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EndValue_k__BackingField = value;
}
template<typename TParameter>
constexpr float_t& Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_get__Duration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Duration_k__BackingField;
}
template<typename TParameter>
constexpr float_t const& Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_get__Duration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Duration_k__BackingField;
}
template<typename TParameter>
constexpr void Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_set__Duration_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Duration_k__BackingField = value;
}
template<typename TParameter>
constexpr float_t& Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_get__Time_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Time_k__BackingField;
}
template<typename TParameter>
constexpr float_t const& Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_get__Time_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Time_k__BackingField;
}
template<typename TParameter>
constexpr void Animancer::MixerParameterTween_1<TParameter>::__cordl_internal_set__Time_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Time_k__BackingField = value;
}
template<typename TParameter>
inline ::Animancer::MixerState_1<TParameter>* Animancer::MixerParameterTween_1<TParameter>::get_Mixer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"get_Mixer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::MixerState_1<TParameter>*>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerParameterTween_1<TParameter>::set_Mixer(::Animancer::MixerState_1<TParameter>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"set_Mixer", {}, {::i2c::type_of<::Animancer::MixerState_1<TParameter>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TParameter>
inline TParameter Animancer::MixerParameterTween_1<TParameter>::get_StartValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"get_StartValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TParameter>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerParameterTween_1<TParameter>::set_StartValue(TParameter  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"set_StartValue", {}, {::i2c::type_of<TParameter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TParameter>
inline TParameter Animancer::MixerParameterTween_1<TParameter>::get_EndValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"get_EndValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TParameter>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerParameterTween_1<TParameter>::set_EndValue(TParameter  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"set_EndValue", {}, {::i2c::type_of<TParameter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TParameter>
inline float_t Animancer::MixerParameterTween_1<TParameter>::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"get_Duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerParameterTween_1<TParameter>::set_Duration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"set_Duration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TParameter>
inline float_t Animancer::MixerParameterTween_1<TParameter>::get_Time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"get_Time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerParameterTween_1<TParameter>::set_Time(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"set_Time", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TParameter>
inline float_t Animancer::MixerParameterTween_1<TParameter>::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"get_Progress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerParameterTween_1<TParameter>::set_Progress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"set_Progress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TParameter>
inline void Animancer::MixerParameterTween_1<TParameter>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerParameterTween_1<TParameter>::_ctor(::Animancer::MixerState_1<TParameter>*  mixer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::MixerState_1<TParameter>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mixer);
}
template<typename TParameter>
inline void Animancer::MixerParameterTween_1<TParameter>::Start(TParameter  endValue, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"Start", {}, {::i2c::type_of<TParameter>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endValue, duration);
}
template<typename TParameter>
inline void Animancer::MixerParameterTween_1<TParameter>::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TParameter>
inline bool Animancer::MixerParameterTween_1<TParameter>::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TParameter>
inline TParameter Animancer::MixerParameterTween_1<TParameter>::CalculateCurrentValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<TParameter>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerParameterTween_1<TParameter>::Animancer_IUpdatable_Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerParameterTween_1<TParameter>*>(),
                        {"Animancer.IUpdatable.Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TParameter>
inline ::Animancer::MixerParameterTween_1<TParameter>* Animancer::MixerParameterTween_1<TParameter>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::MixerParameterTween_1<TParameter>*>());
}
template<typename TParameter>
inline ::Animancer::MixerParameterTween_1<TParameter>* Animancer::MixerParameterTween_1<TParameter>::New_ctor(::Animancer::MixerState_1<TParameter>*  mixer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::MixerParameterTween_1<TParameter>*>(mixer));
}
/// @brief Convert operator to "::Animancer::IUpdatable"
template<typename TParameter>
constexpr  Animancer::MixerParameterTween_1<TParameter>::operator ::Animancer::IUpdatable*() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IUpdatable"
template<typename TParameter>
constexpr ::Animancer::IUpdatable* Animancer::MixerParameterTween_1<TParameter>::i___Animancer__IUpdatable() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::Key_IListItem"
template<typename TParameter>
constexpr  Animancer::MixerParameterTween_1<TParameter>::operator ::Animancer::Key_IListItem*() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::Key_IListItem"
template<typename TParameter>
constexpr ::Animancer::Key_IListItem* Animancer::MixerParameterTween_1<TParameter>::i___Animancer__Key_IListItem() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TParameter>
constexpr ::Animancer::MixerParameterTween_1<TParameter>::MixerParameterTween_1()   {
}
