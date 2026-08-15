#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/KeyedGetSetValueStore_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__KeyedGetSetValueStore_1_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IGetSetValue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename TKey>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>*& Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::__cordl_internal_get_fFSHnmXQjNaSMfrOmSrXVriRcgkLA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fFSHnmXQjNaSMfrOmSrXVriRcgkLA;
}
template<typename TKey>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>* const& Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::__cordl_internal_get_fFSHnmXQjNaSMfrOmSrXVriRcgkLA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fFSHnmXQjNaSMfrOmSrXVriRcgkLA;
}
template<typename TKey>
constexpr void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::__cordl_internal_set_fFSHnmXQjNaSMfrOmSrXVriRcgkLA(::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fFSHnmXQjNaSMfrOmSrXVriRcgkLA = value;
}
template<typename TKey>
constexpr bool& Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::__cordl_internal_get_eFJCmzyJepMnvYFEszhCIfnJGNrF()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eFJCmzyJepMnvYFEszhCIfnJGNrF;
}
template<typename TKey>
constexpr bool const& Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::__cordl_internal_get_eFJCmzyJepMnvYFEszhCIfnJGNrF() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eFJCmzyJepMnvYFEszhCIfnJGNrF;
}
template<typename TKey>
constexpr void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::__cordl_internal_set_eFJCmzyJepMnvYFEszhCIfnJGNrF(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eFJCmzyJepMnvYFEszhCIfnJGNrF = value;
}
template<typename TKey>
inline int32_t Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey>
inline bool Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::get_isReadOnlyCollection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"get_isReadOnlyCollection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey>
inline void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::_ctor(::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey>
inline void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::_ctor(bool  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey>
template<typename TValue>
inline void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::AddItem(TKey  key, ::Rewired::Utils::Interfaces::IGetSetValue_1<TValue>*  item)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                    {"AddItem", {::i2c::class_of<TValue>()}, {::i2c::type_of<TKey>(), ::i2c::type_of<::Rewired::Utils::Interfaces::IGetSetValue_1<TValue>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, item);
}
template<typename TKey>
template<typename TValue>
inline ::Rewired::Utils::Interfaces::IGetSetValue_1<TValue>* Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::GetItem(TKey  key)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                    {"GetItem", {::i2c::class_of<TValue>()}, {::i2c::type_of<TKey>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Interfaces::IGetSetValue_1<TValue>*>(this, ___internal_method, key);
}
template<typename TKey>
template<typename TValue>
inline bool Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::RemoveItem(TKey  key)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                    {"RemoveItem", {::i2c::class_of<TValue>()}, {::i2c::type_of<TKey>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey>
inline bool Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::ContainsKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"ContainsKey", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey>
inline void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey>
template<typename TValue>
inline bool Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::ContainsValue(TKey  key)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                    {"ContainsValue", {::i2c::class_of<TValue>()}, {::i2c::type_of<TKey>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey>
template<typename TValue>
inline TValue Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::GetValue(TKey  key)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                    {"GetValue", {::i2c::class_of<TValue>()}, {::i2c::type_of<TKey>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template<typename TKey>
template<typename TValue>
inline void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::SetValue(TKey  key, TValue  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                    {"SetValue", {::i2c::class_of<TValue>()}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TKey>
template<typename TValue>
inline bool Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::TryGetValue(TKey  key, ::by_ref<TValue>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                    {"TryGetValue", {::i2c::class_of<TValue>()}, {::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename TKey>
template<typename TValue>
inline bool Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::TrySetValue(TKey  key, TValue  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                    {"TrySetValue", {::i2c::class_of<TValue>()}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename TKey>
inline void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::zNteexkzpNLaYHfQWKDtlozpcKAsA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"zNteexkzpNLaYHfQWKDtlozpcKAsA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey>
inline void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::JtPlLsmNkjfMrqGfSNIMenFTFiGT(TKey  _cordl_fixed_empty_name_whitespace, ::System::Type*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"JtPlLsmNkjfMrqGfSNIMenFTFiGT", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey>
inline ::StringW Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::OlTpEMQgOvKhrqgfmCojgPmSYTKQA(TKey  _cordl_fixed_empty_name_whitespace, ::System::Type*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"OlTpEMQgOvKhrqgfmCojgPmSYTKQA", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey>
inline void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::AUkgjgOATiXbwDuvnSlQRVYdauaV(TKey  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"AUkgjgOATiXbwDuvnSlQRVYdauaV", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey>
inline bool Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::hDkdsjARfzRuHaqjKbysngcEcQale(TKey  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"hDkdsjARfzRuHaqjKbysngcEcQale", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey>
inline ::System::Collections::Generic::ICollection_1<TKey>* Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::lNpPRLtCpbXtfOELDHTSTDRtHvuF()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"lNpPRLtCpbXtfOELDHTSTDRtHvuF", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template<typename TKey>
inline bool Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::gNQPjUtSbNKBgVoJKsfusmpAAooH(TKey  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"gNQPjUtSbNKBgVoJKsfusmpAAooH", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey>
inline bool Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::sgYOKkNTDzfNxRLsyTslBuwnmvbJ(TKey  _cordl_fixed_empty_name_whitespace, ::by_ref<::System::Object*>  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"sgYOKkNTDzfNxRLsyTslBuwnmvbJ", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey>
inline ::System::Collections::Generic::ICollection_1<::System::Object*>* Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::zIRBPJgUmqiicPidANoXAOAHYuvlA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"zIRBPJgUmqiicPidANoXAOAHYuvlA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::System::Object*>*>(this, ___internal_method);
}
template<typename TKey>
inline ::System::Object* Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::RfsgQRhIbIxSEusCdGEfGkbkEwoPB(TKey  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"RfsgQRhIbIxSEusCdGEfGkbkEwoPB", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey>
inline void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::nMgfWxDepeinCJhWhvKUOHCFrAZt(TKey  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"nMgfWxDepeinCJhWhvKUOHCFrAZt", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey>
inline void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::oeduRJzvXdmWxhljPhRWGXzSAiAr(::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"oeduRJzvXdmWxhljPhRWGXzSAiAr", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey>
inline void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::WNbgpsOwkiAXKFZXyJoeAVOcvbqJ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"WNbgpsOwkiAXKFZXyJoeAVOcvbqJ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey>
inline bool Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::bloywIfpazmUZFyWIHtzOpQvnLHs(::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"bloywIfpazmUZFyWIHtzOpQvnLHs", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey>
inline void Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::MTfGZQDayYgfhQIrQkkpceEIgdChB(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"MTfGZQDayYgfhQIrQkkpceEIgdChB", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
template<typename TKey>
inline int32_t Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::IFcirpaIiFqJvMisXvDglsqfTvGpA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"IFcirpaIiFqJvMisXvDglsqfTvGpA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey>
inline bool Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::dYernARTKpLaFsCMiQMCyyJBvNdR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"dYernARTKpLaFsCMiQMCyyJBvNdR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey>
inline bool Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::FNAHHcWyHkwFNcDzHcAAbXNodUrcb(::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"FNAHHcWyHkwFNcDzHcAAbXNodUrcb", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
template<typename TKey>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>* Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::SMGpWoAIiyJvulvSRAobSTLQCrDr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"SMGpWoAIiyJvulvSRAobSTLQCrDr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>*>(this, ___internal_method);
}
template<typename TKey>
inline ::System::Collections::IEnumerator* Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TKey>
inline ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>* Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::New_ctor(::System::Collections::Generic::Dictionary_2<TKey,::System::Object*>*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
template<typename TKey>
inline ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>* Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::New_ctor(bool  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,::System::Object*>"
template<typename TKey>
constexpr  Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::operator ::System::Collections::Generic::IDictionary_2<TKey,::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,::System::Object*>"
template<typename TKey>
constexpr ::System::Collections::Generic::IDictionary_2<TKey,::System::Object*>* Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::i___System__Collections__Generic__IDictionary_2_TKey___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>"
template<typename TKey>
constexpr  Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>"
template<typename TKey>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>* Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey___System__Object___() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>"
template<typename TKey>
constexpr  Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>"
template<typename TKey>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>* Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey___System__Object___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey>
constexpr  Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey>
constexpr ::System::Collections::IEnumerable* Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey>
constexpr ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<TKey>::KeyedGetSetValueStore_1()   {
}
