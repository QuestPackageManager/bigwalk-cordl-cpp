#pragma once
// IWYU pragma private; include "Rewired/Utils/CollectionTools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/zzzz__CollectionTools_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__RingBuffer_1_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__IObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::CollectionTools.GetDictionaryValueSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::StringW, ::System::Type*, ::by_ref<::System::Object*>)>(&::Rewired::Utils::CollectionTools::GetDictionaryValueSafe)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181902ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                        {"GetDictionaryValueSafe", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::CollectionTools.GetDictionaryValueSafe_float
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::StringW, ::by_ref<float_t>)>(&::Rewired::Utils::CollectionTools::GetDictionaryValueSafe_float)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181902870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                        {"GetDictionaryValueSafe_float", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::CollectionTools.GetDictionaryValueSafe_int
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::StringW, ::by_ref<int32_t>)>(&::Rewired::Utils::CollectionTools::GetDictionaryValueSafe_int)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1819029b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                        {"GetDictionaryValueSafe_int", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::CollectionTools.AddValueSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::StringW, ::System::Object*)>(&::Rewired::Utils::CollectionTools::AddValueSafe)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1819027c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                        {"AddValueSafe", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::Dictionary_2<TValue,TKey>* Rewired::Utils::CollectionTools::CreateInverseDictionary(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dict)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                    {"CreateInverseDictionary", {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TValue,TKey>*>(nullptr, ___internal_method, dict);
}
template<typename TReturn>
inline TReturn Rewired::Utils::CollectionTools::GetDictionaryValueSafe(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictionary, ::StringW  key)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                    {"GetDictionaryValueSafe", {::i2c::class_of<TReturn>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TReturn>()}
                )));
return ::cordl_internals::RunMethodRethrow<TReturn>(nullptr, ___internal_method, dictionary, key);
}
template<typename TReturn>
inline TReturn Rewired::Utils::CollectionTools::GetDictionaryValueSafe(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictionary, ::StringW  key, ::by_ref<bool>  success)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                    {"GetDictionaryValueSafe", {::i2c::class_of<TReturn>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TReturn>()}
                )));
return ::cordl_internals::RunMethodRethrow<TReturn>(nullptr, ___internal_method, dictionary, key, success);
}
template<typename TKey,typename TValue>
inline TValue Rewired::Utils::CollectionTools::GetDictionaryValueSafe(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary, TKey  key)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                    {"GetDictionaryValueSafe", {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>(), ::i2c::type_of<TKey>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(nullptr, ___internal_method, dictionary, key);
}
template<typename TKey,typename TValue>
inline TValue Rewired::Utils::CollectionTools::GetDictionaryValueSafe(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary, TKey  key, ::by_ref<bool>  success)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                    {"GetDictionaryValueSafe", {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<bool>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(nullptr, ___internal_method, dictionary, key, success);
}
template<typename TReturn>
inline bool Rewired::Utils::CollectionTools::GetDictionaryValueSafe(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictionary, ::StringW  key, ::by_ref<TReturn>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                    {"GetDictionaryValueSafe", {::i2c::class_of<TReturn>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<TReturn>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TReturn>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dictionary, key, value);
}
inline bool Rewired::Utils::CollectionTools::GetDictionaryValueSafe(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictionary, ::StringW  key, ::System::Type*  type, ::by_ref<::System::Object*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                        {"GetDictionaryValueSafe", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dictionary, key, type, value);
}
inline bool Rewired::Utils::CollectionTools::GetDictionaryValueSafe_float(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictionary, ::StringW  key, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                        {"GetDictionaryValueSafe_float", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dictionary, key, value);
}
inline bool Rewired::Utils::CollectionTools::GetDictionaryValueSafe_int(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictionary, ::StringW  key, ::by_ref<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                        {"GetDictionaryValueSafe_int", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dictionary, key, value);
}
inline void Rewired::Utils::CollectionTools::AddValueSafe(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::StringW  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                        {"AddValueSafe", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, key, value);
}
template<typename T>
inline T Rewired::Utils::CollectionTools::GetValue(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                    {"GetValue", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, enumerable, index);
}
template<typename T>
inline T Rewired::Utils::CollectionTools::GetValue(::System::Collections::IEnumerable*  enumerable, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                    {"GetValue", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::IEnumerable*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, enumerable, index);
}
template<typename T>
inline void Rewired::Utils::CollectionTools::Enqueue(::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*  pool, ::Rewired::Utils::Classes::Data::RingBuffer_1<T>*  buffer, T  item, ::by_ref<bool>  overrun)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                    {"Enqueue", {::i2c::class_of<T>()}, {::i2c::type_of<::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::RingBuffer_1<T>*>(), ::i2c::type_of<T>(), ::i2c::type_of<::by_ref<bool>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pool, buffer, item, overrun);
}
template<typename T>
inline void Rewired::Utils::CollectionTools::Clear(::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*  pool, ::Rewired::Utils::Classes::Data::RingBuffer_1<T>*  buffer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::CollectionTools*>(),
                    {"Clear", {::i2c::class_of<T>()}, {::i2c::type_of<::Rewired::Utils::Classes::Utility::IObjectPool_1<T>*>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::RingBuffer_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pool, buffer);
}
// Ctor Parameters []
constexpr ::Rewired::Utils::CollectionTools::CollectionTools()   {
}
