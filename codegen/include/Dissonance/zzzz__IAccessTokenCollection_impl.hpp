#pragma once
// IWYU pragma private; include "Dissonance/IAccessTokenCollection.hpp"
#include "Dissonance/zzzz__IAccessTokenCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::IAccessTokenCollection.get_Tokens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::Dissonance::IAccessTokenCollection::*)()>(&::Dissonance::IAccessTokenCollection::get_Tokens)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::IAccessTokenCollection*>(),
                    {::i2c::class_of<::Dissonance::IAccessTokenCollection*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::IAccessTokenCollection.ContainsToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::IAccessTokenCollection::*)(::StringW)>(&::Dissonance::IAccessTokenCollection::ContainsToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::IAccessTokenCollection*>(),
                    {::i2c::class_of<::Dissonance::IAccessTokenCollection*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::IAccessTokenCollection.AddToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::IAccessTokenCollection::*)(::StringW)>(&::Dissonance::IAccessTokenCollection::AddToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::IAccessTokenCollection*>(),
                    {::i2c::class_of<::Dissonance::IAccessTokenCollection*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::IAccessTokenCollection.RemoveToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::IAccessTokenCollection::*)(::StringW)>(&::Dissonance::IAccessTokenCollection::RemoveToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::IAccessTokenCollection*>(),
                    {::i2c::class_of<::Dissonance::IAccessTokenCollection*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Dissonance::IAccessTokenCollection::get_Tokens()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::IAccessTokenCollection*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline bool Dissonance::IAccessTokenCollection::ContainsToken(::StringW  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::IAccessTokenCollection*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
inline bool Dissonance::IAccessTokenCollection::AddToken(::StringW  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::IAccessTokenCollection*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
inline bool Dissonance::IAccessTokenCollection::RemoveToken(::StringW  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::IAccessTokenCollection*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
