#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/ADictionary_2.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__ADictionary_2_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__ADictionary_2_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_Entry<TKey,TValue>::ADictionary_2_Entry(int32_t  hashCode, int32_t  next, TKey  key, TValue  value) noexcept  {
this->hashCode = hashCode;
this->next = next;
this->key = key;
this->value = value;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_Entry<TKey,TValue>::ADictionary_2_Entry()   {
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::_ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::DictionaryEntry Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::System_Collections_IDictionaryEnumerator_get_Entry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IDictionaryEnumerator.get_Entry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::System_Collections_IDictionaryEnumerator_get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IDictionaryEnumerator.get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::System_Collections_IDictionaryEnumerator_get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IDictionaryEnumerator.get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerator* Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr ::System::IDisposable* Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::operator ::System::Collections::IDictionaryEnumerator*()  {
return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IDictionaryEnumerator* Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::i___System__Collections__IDictionaryEnumerator()  {
return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "NWZUqNgHeQcgfKRObCFPGxiihqjmA", ty: "::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "UoefZOFTgBndgcZJCopDDcJwAqSGc", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MURGLbhRpUHxAsuJRdQKRQqRYvuF", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PZSdsDSzjhldYxzKqYOLtcHRbdeU", ty: "::System::Collections::Generic::KeyValuePair_2<TKey,TValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "CAefsiEnyDlJDHJUrqOBfJZlzLZHA", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::ADictionary_2_Enumerator(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  NWZUqNgHeQcgfKRObCFPGxiihqjmA, int32_t  UoefZOFTgBndgcZJCopDDcJwAqSGc, int32_t  MURGLbhRpUHxAsuJRdQKRQqRYvuF, ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  PZSdsDSzjhldYxzKqYOLtcHRbdeU, int32_t  CAefsiEnyDlJDHJUrqOBfJZlzLZHA) noexcept  {
this->NWZUqNgHeQcgfKRObCFPGxiihqjmA = NWZUqNgHeQcgfKRObCFPGxiihqjmA;
this->UoefZOFTgBndgcZJCopDDcJwAqSGc = UoefZOFTgBndgcZJCopDDcJwAqSGc;
this->MURGLbhRpUHxAsuJRdQKRQqRYvuF = MURGLbhRpUHxAsuJRdQKRQqRYvuF;
this->PZSdsDSzjhldYxzKqYOLtcHRbdeU = PZSdsDSzjhldYxzKqYOLtcHRbdeU;
this->CAefsiEnyDlJDHJUrqOBfJZlzLZHA = CAefsiEnyDlJDHJUrqOBfJZlzLZHA;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>::ADictionary_2_Enumerator()   {
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::_ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline TKey Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TKey>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TKey>"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::operator ::System::Collections::Generic::IEnumerator_1<TKey>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TKey>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<TKey>* Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::i___System__Collections__Generic__IEnumerator_1_TKey_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerator* Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr ::System::IDisposable* Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "IVpHtjxtMavPPCnBQfWccbBnDQWgb", ty: "::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "EatBKMBseInRGEhVirFssaHayPbFe", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jEOYPhBoSSKudxmlDfsimqRZpXlD", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "QKYOAAUkdfFPhLSPgBrdPaFlwoQn", ty: "TKey", modifiers: "", def_value: Some("{}") }]
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::KeyCollection_ADictionary_2_Enumerator(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  IVpHtjxtMavPPCnBQfWccbBnDQWgb, int32_t  EatBKMBseInRGEhVirFssaHayPbFe, int32_t  jEOYPhBoSSKudxmlDfsimqRZpXlD, TKey  QKYOAAUkdfFPhLSPgBrdPaFlwoQn) noexcept  {
this->IVpHtjxtMavPPCnBQfWccbBnDQWgb = IVpHtjxtMavPPCnBQfWccbBnDQWgb;
this->EatBKMBseInRGEhVirFssaHayPbFe = EatBKMBseInRGEhVirFssaHayPbFe;
this->jEOYPhBoSSKudxmlDfsimqRZpXlD = jEOYPhBoSSKudxmlDfsimqRZpXlD;
this->QKYOAAUkdfFPhLSPgBrdPaFlwoQn = QKYOAAUkdfFPhLSPgBrdPaFlwoQn;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>::KeyCollection_ADictionary_2_Enumerator()   {
}
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*& Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::__cordl_internal_get_ldXSFijsAzrSXEWoENSNdKRIeDvf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ldXSFijsAzrSXEWoENSNdKRIeDvf;
}
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* const& Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::__cordl_internal_get_ldXSFijsAzrSXEWoENSNdKRIeDvf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ldXSFijsAzrSXEWoENSNdKRIeDvf;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::__cordl_internal_set_ldXSFijsAzrSXEWoENSNdKRIeDvf(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ldXSFijsAzrSXEWoENSNdKRIeDvf = value;
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::_ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue> Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::KeyCollection_ADictionary_2_Enumerator<TKey,TValue>>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::CopyTo(::ArrayW<TKey>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template<typename TKey,typename TValue>
inline int32_t Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::bGfpLoqVyyBoacKRChHGKpogYdfq()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"bGfpLoqVyyBoacKRChHGKpogYdfq", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::tpOZlImeIgbcdFgkLWeWJRhAssnKA(TKey  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"tpOZlImeIgbcdFgkLWeWJRhAssnKA", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::exJZAxiPDAVDYXdcnUukvHXKCIHr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"exJZAxiPDAVDYXdcnUukvHXKCIHr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::qYprkHOscgGJxIAlCZvHYRMqkWjp(TKey  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"qYprkHOscgGJxIAlCZvHYRMqkWjp", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::dvslIFVqHIXjbImYFbSBhCPeJfpCA(TKey  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"dvslIFVqHIXjbImYFbSBhCPeJfpCA", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TKey>* Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::WVVLjGVbHthSMhdpQKXjtSYmbSew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"WVVLjGVbHthSMhdpQKXjtSYmbSew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TKey>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::IEnumerator* Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::New_ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TKey>"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::operator ::System::Collections::Generic::ICollection_1<TKey>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TKey>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TKey>* Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::i___System__Collections__Generic__ICollection_1_TKey_() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TKey>"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<TKey>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TKey>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TKey>* Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::i___System__Collections__Generic__IEnumerable_1_TKey_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerable* Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template<typename TKey,typename TValue>
constexpr ::System::Collections::ICollection* Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>::ADictionary_2_KeyCollection()   {
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::_ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline TValue Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::operator ::System::Collections::Generic::IEnumerator_1<TValue>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::i___System__Collections__Generic__IEnumerator_1_TValue_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerator* Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr ::System::IDisposable* Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "VvbOXOzXVMYlFCpmzAYgJcEwLPiB", ty: "::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "IkgcnHFvCqnfwCPdXXJHUlXQurjJA", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lCttPdLKpxfymbmJdLyhYbDdXoDR", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "zlrjWygLiVFRQFRPpGHJQSIyBBPU", ty: "TValue", modifiers: "", def_value: Some("{}") }]
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::ValueCollection_ADictionary_2_Enumerator(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  VvbOXOzXVMYlFCpmzAYgJcEwLPiB, int32_t  IkgcnHFvCqnfwCPdXXJHUlXQurjJA, int32_t  lCttPdLKpxfymbmJdLyhYbDdXoDR, TValue  zlrjWygLiVFRQFRPpGHJQSIyBBPU) noexcept  {
this->VvbOXOzXVMYlFCpmzAYgJcEwLPiB = VvbOXOzXVMYlFCpmzAYgJcEwLPiB;
this->IkgcnHFvCqnfwCPdXXJHUlXQurjJA = IkgcnHFvCqnfwCPdXXJHUlXQurjJA;
this->lCttPdLKpxfymbmJdLyhYbDdXoDR = lCttPdLKpxfymbmJdLyhYbDdXoDR;
this->zlrjWygLiVFRQFRPpGHJQSIyBBPU = zlrjWygLiVFRQFRPpGHJQSIyBBPU;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>::ValueCollection_ADictionary_2_Enumerator()   {
}
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*& Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::__cordl_internal_get_ultXOkqQZPsGulODqDchejTbhJhEb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ultXOkqQZPsGulODqDchejTbhJhEb;
}
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* const& Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::__cordl_internal_get_ultXOkqQZPsGulODqDchejTbhJhEb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ultXOkqQZPsGulODqDchejTbhJhEb;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::__cordl_internal_set_ultXOkqQZPsGulODqDchejTbhJhEb(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ultXOkqQZPsGulODqDchejTbhJhEb = value;
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::_ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue> Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::ValueCollection_ADictionary_2_Enumerator<TKey,TValue>>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::CopyTo(::ArrayW<TValue>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template<typename TKey,typename TValue>
inline int32_t Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::TNKUCTPJTkgpZCayPxMusBYJjdFIb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"TNKUCTPJTkgpZCayPxMusBYJjdFIb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::FBSkTiPpGKYviuAFMOvEDvqLpMix(TValue  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"FBSkTiPpGKYviuAFMOvEDvqLpMix", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::AKqSsIEdOxfkVAMujIPAuZTYYGbeA(TValue  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"AKqSsIEdOxfkVAMujIPAuZTYYGbeA", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::wTSmRATtvyIhtxjvLLzDrdZqUfWN()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"wTSmRATtvyIhtxjvLLzDrdZqUfWN", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::ANyUzdhznNkbFVgWDzuLRqTBpTFw(TValue  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"ANyUzdhznNkbFVgWDzuLRqTBpTFw", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TValue>* Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::OIWGlKOdCzQffmcoaSjhkqAnQBix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"OIWGlKOdCzQffmcoaSjhkqAnQBix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::IEnumerator* Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::New_ctor(::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TValue>"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::operator ::System::Collections::Generic::ICollection_1<TValue>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TValue>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TValue>* Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::i___System__Collections__Generic__ICollection_1_TValue_() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerable* Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template<typename TKey,typename TValue>
constexpr ::System::Collections::ICollection* Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>::ADictionary_2_ValueCollection()   {
}
template<typename TKey,typename TValue>
constexpr ::ArrayW<int32_t>& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_cFFijWqVtdCQGOXBxMqrnWXCcqZQ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cFFijWqVtdCQGOXBxMqrnWXCcqZQ;
}
template<typename TKey,typename TValue>
constexpr ::ArrayW<int32_t> const& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_cFFijWqVtdCQGOXBxMqrnWXCcqZQ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cFFijWqVtdCQGOXBxMqrnWXCcqZQ;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_set_cFFijWqVtdCQGOXBxMqrnWXCcqZQ(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cFFijWqVtdCQGOXBxMqrnWXCcqZQ = value;
}
template<typename TKey,typename TValue>
constexpr ::ArrayW<::Rewired::Utils::Classes::Data::ADictionary_2_Entry<TKey,TValue>>& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get__entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entries;
}
template<typename TKey,typename TValue>
constexpr ::ArrayW<::Rewired::Utils::Classes::Data::ADictionary_2_Entry<TKey,TValue>> const& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get__entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entries;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_set__entries(::ArrayW<::Rewired::Utils::Classes::Data::ADictionary_2_Entry<TKey,TValue>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entries = value;
}
template<typename TKey,typename TValue>
constexpr int32_t& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
template<typename TKey,typename TValue>
constexpr int32_t const& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
template<typename TKey,typename TValue>
constexpr int32_t& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_ukXOHtSenXBDZGftsNvOMboejccS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ukXOHtSenXBDZGftsNvOMboejccS;
}
template<typename TKey,typename TValue>
constexpr int32_t const& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_ukXOHtSenXBDZGftsNvOMboejccS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ukXOHtSenXBDZGftsNvOMboejccS;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_set_ukXOHtSenXBDZGftsNvOMboejccS(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ukXOHtSenXBDZGftsNvOMboejccS = value;
}
template<typename TKey,typename TValue>
constexpr int32_t& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_nPSPOpsKmVdvBbQqxRrBNIPBWLRm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nPSPOpsKmVdvBbQqxRrBNIPBWLRm;
}
template<typename TKey,typename TValue>
constexpr int32_t const& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_nPSPOpsKmVdvBbQqxRrBNIPBWLRm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nPSPOpsKmVdvBbQqxRrBNIPBWLRm;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_set_nPSPOpsKmVdvBbQqxRrBNIPBWLRm(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nPSPOpsKmVdvBbQqxRrBNIPBWLRm = value;
}
template<typename TKey,typename TValue>
constexpr int32_t& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_lZhhwkLlPZjYOCpxxqayCDNRhgpW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lZhhwkLlPZjYOCpxxqayCDNRhgpW;
}
template<typename TKey,typename TValue>
constexpr int32_t const& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_lZhhwkLlPZjYOCpxxqayCDNRhgpW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lZhhwkLlPZjYOCpxxqayCDNRhgpW;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_set_lZhhwkLlPZjYOCpxxqayCDNRhgpW(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lZhhwkLlPZjYOCpxxqayCDNRhgpW = value;
}
template<typename TKey,typename TValue>
constexpr int32_t& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_zFqEmzckBssyvKUBjjYckQrfmjdfA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zFqEmzckBssyvKUBjjYckQrfmjdfA;
}
template<typename TKey,typename TValue>
constexpr int32_t const& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_zFqEmzckBssyvKUBjjYckQrfmjdfA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zFqEmzckBssyvKUBjjYckQrfmjdfA;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_set_zFqEmzckBssyvKUBjjYckQrfmjdfA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zFqEmzckBssyvKUBjjYckQrfmjdfA = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_sVSNVvCHwCPAdxYqdbKZnniPBRXz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sVSNVvCHwCPAdxYqdbKZnniPBRXz;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_sVSNVvCHwCPAdxYqdbKZnniPBRXz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sVSNVvCHwCPAdxYqdbKZnniPBRXz;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_set_sVSNVvCHwCPAdxYqdbKZnniPBRXz(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sVSNVvCHwCPAdxYqdbKZnniPBRXz = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TValue>*& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_UyJCrDxEWEkAYxWJBKCMzdvZOIqe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UyJCrDxEWEkAYxWJBKCMzdvZOIqe;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TValue>* const& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_UyJCrDxEWEkAYxWJBKCMzdvZOIqe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UyJCrDxEWEkAYxWJBKCMzdvZOIqe;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_set_UyJCrDxEWEkAYxWJBKCMzdvZOIqe(::System::Collections::Generic::IEqualityComparer_1<TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UyJCrDxEWEkAYxWJBKCMzdvZOIqe = value;
}
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_SisCxQfhUnCEBovCyHkpkOBfrPYEb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SisCxQfhUnCEBovCyHkpkOBfrPYEb;
}
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>* const& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_SisCxQfhUnCEBovCyHkpkOBfrPYEb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SisCxQfhUnCEBovCyHkpkOBfrPYEb;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_set_SisCxQfhUnCEBovCyHkpkOBfrPYEb(::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SisCxQfhUnCEBovCyHkpkOBfrPYEb = value;
}
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_LpxFIFYTWWaJZdTWSbIpVhjCFjUib()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LpxFIFYTWWaJZdTWSbIpVhjCFjUib;
}
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>* const& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_LpxFIFYTWWaJZdTWSbIpVhjCFjUib() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LpxFIFYTWWaJZdTWSbIpVhjCFjUib;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_set_LpxFIFYTWWaJZdTWSbIpVhjCFjUib(::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LpxFIFYTWWaJZdTWSbIpVhjCFjUib = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Object*& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_SgPXyZZMJNwGIjQOdmAmAVehfUmm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SgPXyZZMJNwGIjQOdmAmAVehfUmm;
}
template<typename TKey,typename TValue>
constexpr ::System::Object* const& Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_get_SgPXyZZMJNwGIjQOdmAmAVehfUmm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SgPXyZZMJNwGIjQOdmAmAVehfUmm;
}
template<typename TKey,typename TValue>
constexpr void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::__cordl_internal_set_SgPXyZZMJNwGIjQOdmAmAVehfUmm(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SgPXyZZMJNwGIjQOdmAmAVehfUmm = value;
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::setStaticF_CeNIYJzQRdpwNeWZVRvUbEYaazCK(bool  value)  {
::cordl_internals::setStaticField<bool, "CeNIYJzQRdpwNeWZVRvUbEYaazCK", ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(std::forward<bool>(value));
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::getStaticF_CeNIYJzQRdpwNeWZVRvUbEYaazCK()  {
return ::cordl_internals::getStaticField<bool, "CeNIYJzQRdpwNeWZVRvUbEYaazCK", ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>();
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::setStaticF_yDOFVbQAOporojJgOikCnhSUSBPq(bool  value)  {
::cordl_internals::setStaticField<bool, "yDOFVbQAOporojJgOikCnhSUSBPq", ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(std::forward<bool>(value));
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::getStaticF_yDOFVbQAOporojJgOikCnhSUSBPq()  {
return ::cordl_internals::getStaticField<bool, "yDOFVbQAOporojJgOikCnhSUSBPq", ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>();
}
template<typename TKey,typename TValue>
inline int32_t Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline int32_t Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::get_TotalCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"get_TotalCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::ADictionary_2_KeyCollection<TKey,TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::ADictionary_2_ValueCollection<TKey,TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEqualityComparer_1<TKey>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::get_KeyComparer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"get_KeyComparer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::set_KeyComparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"set_KeyComparer", {}, {::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEqualityComparer_1<TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::get_ValueComparer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"get_ValueComparer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEqualityComparer_1<TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::set_ValueComparer(::System::Collections::Generic::IEqualityComparer_1<TValue>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"set_ValueComparer", {}, {::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TKey,typename TValue>
inline TValue Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::get_Item(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"get_Item", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::set_Item(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"set_Item", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::Add(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"Add", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::ContainsKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"ContainsKey", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::ContainsValue(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"ContainsValue", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue> Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::ADictionary_2_Enumerator<TKey,TValue>>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::Remove(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"Remove", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::TryGetValue(TKey  key, ::by_ref<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"TryGetValue", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline TValue Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetValueSafe(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetValueSafe", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline int32_t Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::get_IndexOfFirst()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"get_IndexOfFirst", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline int32_t Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::get_IndexOfLast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"get_IndexOfLast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline int32_t Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::IndexOfKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"IndexOfKey", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline int32_t Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::IndexOfValue(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"IndexOfValue", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::IsValidAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"IsValidAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
template<typename TKey,typename TValue>
inline TKey Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetKeyAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetKeyAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method, index);
}
template<typename TKey,typename TValue>
inline TValue Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetValueAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetValueAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, index);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetEntryAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetEntryAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(this, ___internal_method, index);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::TryGetKeyAt(int32_t  index, ::by_ref<TKey>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"TryGetKeyAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<TKey>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, key);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::TryGetValueAt(int32_t  index, ::by_ref<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"TryGetValueAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, value);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::TryGetEntryAt(int32_t  index, ::by_ref<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"TryGetEntryAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, entry);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetNextIndex(::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetNextIndex", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
template<typename TKey,typename TValue>
inline int32_t Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetNextIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetNextIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetNextKey(::by_ref<int32_t>  index, ::by_ref<TKey>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetNextKey", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<TKey>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, key);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetNextValue(::by_ref<int32_t>  index, ::by_ref<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetNextValue", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, value);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetNextEntry(::by_ref<int32_t>  index, ::by_ref<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetNextEntry", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, entry);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetPreviousIndex(::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetPreviousIndex", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
template<typename TKey,typename TValue>
inline int32_t Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetPreviousIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetPreviousIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetPreviousKey(::by_ref<int32_t>  index, ::by_ref<TKey>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetPreviousKey", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<TKey>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, key);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetPreviousValue(::by_ref<int32_t>  index, ::by_ref<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetPreviousValue", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, value);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::GetPreviousEntry(::by_ref<int32_t>  index, ::by_ref<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"GetPreviousEntry", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, entry);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::FZxmrxnLQSCFidxcCqaxbNDReYvp(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"FZxmrxnLQSCFidxcCqaxbNDReYvp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::ITjtvVhERLootmOejuvdyiSPufbh(TKey  _cordl_fixed_empty_name_whitespace, TValue  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"ITjtvVhERLootmOejuvdyiSPufbh", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::SYjGbJcnCmpfehzLBLIBuUuCXykjb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"SYjGbJcnCmpfehzLBLIBuUuCXykjb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::EpMdqrLfQnTWniPrwpqeJdjfvHPC(int32_t  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"EpMdqrLfQnTWniPrwpqeJdjfvHPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ICollection_1<TKey>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::YfDSuHZaYTVOIQzCmvXDSiRbsoG()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"YfDSuHZaYTVOIQzCmvXDSiRbsoG", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ICollection_1<TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::BhyHAukjuQcqxGyvqvaYimffGQamA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"BhyHAukjuQcqxGyvqvaYimffGQamA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::WvKdRZFQdiaXZugNwODHBavGhYcI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"WvKdRZFQdiaXZugNwODHBavGhYcI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::ERcpglaArQYEYVJCzNDGKJcPMaeF(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"ERcpglaArQYEYVJCzNDGKJcPMaeF", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::IxTAJWzZzQNfqgywRFPpMrDpAvET(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"IxTAJWzZzQNfqgywRFPpMrDpAvET", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::CXYdABEGtjcHnXWRKDIaKMkCGioHb(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"CXYdABEGtjcHnXWRKDIaKMkCGioHb", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::NxNBDcSTOdgQCiscOYQcIHtJGUxKA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"NxNBDcSTOdgQCiscOYQcIHtJGUxKA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::dLwbIrDeNXEsReVPCWdeTPZNqignb(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"dLwbIrDeNXEsReVPCWdeTPZNqignb", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template<typename TKey,typename TValue>
inline ::System::Collections::IEnumerator* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_IDictionary_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IDictionary.get_IsFixedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_IDictionary_get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IDictionary.get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::ICollection* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_IDictionary_get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IDictionary.get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::ICollection* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_IDictionary_get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IDictionary.get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_IDictionary_get_Item(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IDictionary.get_Item", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_IDictionary_set_Item(::System::Object*  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IDictionary.set_Item", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_IDictionary_Add(::System::Object*  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IDictionary.Add", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_IDictionary_Contains(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IDictionary.Contains", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline ::System::Collections::IDictionaryEnumerator* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_IDictionary_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IDictionary.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::System_Collections_IDictionary_Remove(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IDictionary.Remove", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ICollection_1<TKey>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::LpDoeunhyUeKpEMkWeDpheGKDNuzB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"LpDoeunhyUeKpEMkWeDpheGKDNuzB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ICollection_1<TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::WTjoKambgELjwtIKQBXqsuVyjnkv()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"WTjoKambgELjwtIKQBXqsuVyjnkv", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::eBDWCTVNeFJsunIvyNWKuduyVYCT(::System::Object*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                        {"eBDWCTVNeFJsunIvyNWKuduyVYCT", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey,typename TValue>
template<typename >
inline void Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::wFybkKERowSdLTnQuFWbdKDvfXqaA(::System::Object*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(),
                    {"wFybkKERowSdLTnQuFWbdKDvfXqaA", {::i2c::class_of<>()}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>());
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(_cordl_fixed_empty_name_whitespace));
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(_cordl_fixed_empty_name_whitespace));
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(_cordl_fixed_empty_name_whitespace));
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
template<typename TKey,typename TValue>
inline ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  _cordl_fixed_empty_name_whitespace_param_1, ::System::Collections::Generic::IEqualityComparer_1<TValue>*  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IDictionary_2<TKey,TValue>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerable* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::operator ::System::Collections::IDictionary*() noexcept {
return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IDictionary* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::i___System__Collections__IDictionary() noexcept {
return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template<typename TKey,typename TValue>
constexpr ::System::Collections::ICollection* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<TKey,TValue>"
template<typename TKey,typename TValue>
constexpr  Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::operator ::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<TKey,TValue>*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<TKey,TValue>"
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<TKey,TValue>* Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::i___Rewired__Utils__Interfaces__IReadOnlyDictionary_2_TKey_TValue_() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<TKey,TValue>::ADictionary_2()   {
}
