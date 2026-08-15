#pragma once
// IWYU pragma private; include "Mirror/FizzySteam/BidirectionalDictionary_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/FizzySteam/zzzz__BidirectionalDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
template<typename T1,typename T2>
constexpr ::System::Collections::Generic::Dictionary_2<T1,T2>*& Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::__cordl_internal_get_t1ToT2Dict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___t1ToT2Dict;
}
template<typename T1,typename T2>
constexpr ::System::Collections::Generic::Dictionary_2<T1,T2>* const& Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::__cordl_internal_get_t1ToT2Dict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___t1ToT2Dict;
}
template<typename T1,typename T2>
constexpr void Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::__cordl_internal_set_t1ToT2Dict(::System::Collections::Generic::Dictionary_2<T1,T2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___t1ToT2Dict = value;
}
template<typename T1,typename T2>
constexpr ::System::Collections::Generic::Dictionary_2<T2,T1>*& Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::__cordl_internal_get_t2ToT1Dict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___t2ToT1Dict;
}
template<typename T1,typename T2>
constexpr ::System::Collections::Generic::Dictionary_2<T2,T1>* const& Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::__cordl_internal_get_t2ToT1Dict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___t2ToT1Dict;
}
template<typename T1,typename T2>
constexpr void Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::__cordl_internal_set_t2ToT1Dict(::System::Collections::Generic::Dictionary_2<T2,T1>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___t2ToT1Dict = value;
}
template<typename T1,typename T2>
inline ::System::Collections::Generic::IEnumerable_1<T1>* Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::get_FirstTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"get_FirstTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T1>*>(this, ___internal_method);
}
template<typename T1,typename T2>
inline ::System::Collections::Generic::IEnumerable_1<T2>* Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::get_SecondTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"get_SecondTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T2>*>(this, ___internal_method);
}
template<typename T1,typename T2>
inline ::System::Collections::IEnumerator* Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T1,typename T2>
inline int32_t Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T1,typename T2>
inline void Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::Add(T1  key, T2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"Add", {}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename T1,typename T2>
inline void Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::Add(T2  key, T1  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"Add", {}, {::i2c::type_of<T2>(), ::i2c::type_of<T1>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename T1,typename T2>
inline T2 Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::Get(T1  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"Get", {}, {::i2c::type_of<T1>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T2>(this, ___internal_method, key);
}
template<typename T1,typename T2>
inline T1 Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::Get(T2  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"Get", {}, {::i2c::type_of<T2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T1>(this, ___internal_method, key);
}
template<typename T1,typename T2>
inline bool Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::TryGetValue(T1  key, ::by_ref<T2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"TryGetValue", {}, {::i2c::type_of<T1>(), ::i2c::type_of<::by_ref<T2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename T1,typename T2>
inline bool Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::TryGetValue(T2  key, ::by_ref<T1>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"TryGetValue", {}, {::i2c::type_of<T2>(), ::i2c::type_of<::by_ref<T1>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename T1,typename T2>
inline bool Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::Contains(T1  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"Contains", {}, {::i2c::type_of<T1>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename T1,typename T2>
inline bool Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::Contains(T2  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"Contains", {}, {::i2c::type_of<T2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename T1,typename T2>
inline void Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::Remove(T1  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"Remove", {}, {::i2c::type_of<T1>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template<typename T1,typename T2>
inline void Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::Remove(T2  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"Remove", {}, {::i2c::type_of<T2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template<typename T1,typename T2>
inline T1 Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::get_Item(T2  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"get_Item", {}, {::i2c::type_of<T2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T1>(this, ___internal_method, key);
}
template<typename T1,typename T2>
inline void Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::set_Item(T2  key, T1  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"set_Item", {}, {::i2c::type_of<T2>(), ::i2c::type_of<T1>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename T1,typename T2>
inline T2 Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::get_Item(T1  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"get_Item", {}, {::i2c::type_of<T1>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T2>(this, ___internal_method, key);
}
template<typename T1,typename T2>
inline void Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::set_Item(T1  key, T2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {"set_Item", {}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename T1,typename T2>
inline void Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T1,typename T2>
inline ::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>* Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>*>());
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T1,typename T2>
constexpr  Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T1,typename T2>
constexpr ::System::Collections::IEnumerable* Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::Mirror::FizzySteam::BidirectionalDictionary_2<T1,T2>::BidirectionalDictionary_2()   {
}
