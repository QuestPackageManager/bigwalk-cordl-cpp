#pragma once
// IWYU pragma private; include "Rewired/Utils/SafeAction_2.hpp"
#include "Rewired/Utils/zzzz__SafeDelegate_1_impl.hpp"
#include "Rewired/Utils/zzzz__SafeAction_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T,typename T2>
constexpr T& Rewired::Utils::SafeAction_2<T,T2>::__cordl_internal_get_mKvqjBgcGdQrmpDKZwJzlEHqKHrg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mKvqjBgcGdQrmpDKZwJzlEHqKHrg;
}
template<typename T,typename T2>
constexpr T const& Rewired::Utils::SafeAction_2<T,T2>::__cordl_internal_get_mKvqjBgcGdQrmpDKZwJzlEHqKHrg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mKvqjBgcGdQrmpDKZwJzlEHqKHrg;
}
template<typename T,typename T2>
constexpr void Rewired::Utils::SafeAction_2<T,T2>::__cordl_internal_set_mKvqjBgcGdQrmpDKZwJzlEHqKHrg(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mKvqjBgcGdQrmpDKZwJzlEHqKHrg = value;
}
template<typename T,typename T2>
constexpr T2& Rewired::Utils::SafeAction_2<T,T2>::__cordl_internal_get_HpvcocLhIriIvEdcNdysNsfMWHsY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HpvcocLhIriIvEdcNdysNsfMWHsY;
}
template<typename T,typename T2>
constexpr T2 const& Rewired::Utils::SafeAction_2<T,T2>::__cordl_internal_get_HpvcocLhIriIvEdcNdysNsfMWHsY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HpvcocLhIriIvEdcNdysNsfMWHsY;
}
template<typename T,typename T2>
constexpr void Rewired::Utils::SafeAction_2<T,T2>::__cordl_internal_set_HpvcocLhIriIvEdcNdysNsfMWHsY(T2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HpvcocLhIriIvEdcNdysNsfMWHsY = value;
}
template<typename T,typename T2>
inline void Rewired::Utils::SafeAction_2<T,T2>::setStaticF_QvdYGOMnlgHsyjNiHwncfEgZEbff(::System::Action_2<::System::Object*,::System::Action_2<T,T2>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Object*,::System::Action_2<T,T2>*>*, "QvdYGOMnlgHsyjNiHwncfEgZEbff", ::Rewired::Utils::SafeAction_2<T,T2>*>(std::forward<::System::Action_2<::System::Object*,::System::Action_2<T,T2>*>*>(value));
}
template<typename T,typename T2>
inline ::System::Action_2<::System::Object*,::System::Action_2<T,T2>*>* Rewired::Utils::SafeAction_2<T,T2>::getStaticF_QvdYGOMnlgHsyjNiHwncfEgZEbff()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Object*,::System::Action_2<T,T2>*>*, "QvdYGOMnlgHsyjNiHwncfEgZEbff", ::Rewired::Utils::SafeAction_2<T,T2>*>();
}
template<typename T,typename T2>
inline void Rewired::Utils::SafeAction_2<T,T2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeAction_2<T,T2>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename T2>
inline void Rewired::Utils::SafeAction_2<T,T2>::_ctor(::System::Action_1<::System::Exception*>*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeAction_2<T,T2>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename T,typename T2>
inline void Rewired::Utils::SafeAction_2<T,T2>::_ctor(::Rewired::Utils::SafeAction_2<T,T2>*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeAction_2<T,T2>*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Utils::SafeAction_2<T,T2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename T,typename T2>
inline void Rewired::Utils::SafeAction_2<T,T2>::Invoke(T  arg0, T2  arg1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeAction_2<T,T2>*>(),
                        {"Invoke", {}, {::i2c::type_of<T>(), ::i2c::type_of<T2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0, arg1);
}
template<typename T,typename T2>
inline ::System::Object* Rewired::Utils::SafeAction_2<T,T2>::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::SafeAction_2<T,T2>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T,typename T2>
inline ::System::Action_2<::System::Object*,::System::Action_2<T,T2>*>* Rewired::Utils::SafeAction_2<T,T2>::LmOqGcANxWHACxNtCDupNoxMKWuS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeAction_2<T,T2>*>(),
                        {"LmOqGcANxWHACxNtCDupNoxMKWuS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<::System::Object*,::System::Action_2<T,T2>*>*>(nullptr, ___internal_method);
}
template<typename T,typename T2>
inline void Rewired::Utils::SafeAction_2<T,T2>::tfHuVxbZFDATQcikWlnxiDPFTZwU(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::Action_2<T,T2>*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeAction_2<T,T2>*>(),
                        {"tfHuVxbZFDATQcikWlnxiDPFTZwU", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Action_2<T,T2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename T,typename T2>
inline ::Rewired::Utils::SafeAction_2<T,T2>* Rewired::Utils::SafeAction_2<T,T2>::op_Addition(::Rewired::Utils::SafeAction_2<T,T2>*  eventList, ::System::Action_2<T,T2>*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeAction_2<T,T2>*>(),
                        {"op_Addition", {}, {::i2c::type_of<::Rewired::Utils::SafeAction_2<T,T2>*>(), ::i2c::type_of<::System::Action_2<T,T2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::SafeAction_2<T,T2>*>(nullptr, ___internal_method, eventList, listener);
}
template<typename T,typename T2>
inline ::Rewired::Utils::SafeAction_2<T,T2>* Rewired::Utils::SafeAction_2<T,T2>::op_Subtraction(::Rewired::Utils::SafeAction_2<T,T2>*  eventList, ::System::Action_2<T,T2>*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeAction_2<T,T2>*>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::Rewired::Utils::SafeAction_2<T,T2>*>(), ::i2c::type_of<::System::Action_2<T,T2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::SafeAction_2<T,T2>*>(nullptr, ___internal_method, eventList, listener);
}
template<typename T,typename T2>
inline ::System::Action_2<T,T2>* Rewired::Utils::SafeAction_2<T,T2>::op_Implicit___System__Action_2_T_T2__(::Rewired::Utils::SafeAction_2<T,T2>*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeAction_2<T,T2>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Rewired::Utils::SafeAction_2<T,T2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<T,T2>*>(nullptr, ___internal_method, obj);
}
template<typename T,typename T2>
inline ::Rewired::Utils::SafeAction_2<T,T2>* Rewired::Utils::SafeAction_2<T,T2>::op_Implicit___Rewired__Utils__SafeAction_2_T_T2__(::System::Action_2<T,T2>*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::SafeAction_2<T,T2>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Action_2<T,T2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::SafeAction_2<T,T2>*>(nullptr, ___internal_method, obj);
}
template<typename T,typename T2>
inline ::Rewired::Utils::SafeAction_2<T,T2>* Rewired::Utils::SafeAction_2<T,T2>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::SafeAction_2<T,T2>*>());
}
template<typename T,typename T2>
inline ::Rewired::Utils::SafeAction_2<T,T2>* Rewired::Utils::SafeAction_2<T,T2>::New_ctor(::System::Action_1<::System::Exception*>*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::SafeAction_2<T,T2>*>(_cordl_fixed_empty_name_whitespace));
}
template<typename T,typename T2>
inline ::Rewired::Utils::SafeAction_2<T,T2>* Rewired::Utils::SafeAction_2<T,T2>::New_ctor(::Rewired::Utils::SafeAction_2<T,T2>*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::SafeAction_2<T,T2>*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
template<typename T,typename T2>
constexpr ::Rewired::Utils::SafeAction_2<T,T2>::SafeAction_2()   {
}
