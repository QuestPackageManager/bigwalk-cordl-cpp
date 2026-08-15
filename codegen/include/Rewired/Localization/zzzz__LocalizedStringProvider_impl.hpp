#pragma once
// IWYU pragma private; include "Rewired/Localization/LocalizedStringProvider.hpp"
#include "Rewired/Localization/zzzz__LocalizedStringProviderBase_impl.hpp"
#include "Rewired/Localization/zzzz__LocalizedStringProvider_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::Rewired::Localization::LocalizedStringProvider.get_dictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Rewired::Localization::LocalizedStringProvider::*)()>(&::Rewired::Localization::LocalizedStringProvider::get_dictionary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(),
                    {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Localization::LocalizedStringProvider.set_dictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Localization::LocalizedStringProvider::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Rewired::Localization::LocalizedStringProvider::set_dictionary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(),
                    {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Localization::LocalizedStringProvider.get_localizedStringsFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (::Rewired::Localization::LocalizedStringProvider::*)()>(&::Rewired::Localization::LocalizedStringProvider::get_localizedStringsFile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(),
                    {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Localization::LocalizedStringProvider.set_localizedStringsFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Localization::LocalizedStringProvider::*)(::UnityEngine::TextAsset*)>(&::Rewired::Localization::LocalizedStringProvider::set_localizedStringsFile)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803ab2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(),
                    {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Localization::LocalizedStringProvider.get_initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Localization::LocalizedStringProvider::*)()>(&::Rewired::Localization::LocalizedStringProvider::get_initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803023c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(),
                    {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Localization::LocalizedStringProvider.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Localization::LocalizedStringProvider::*)()>(&::Rewired::Localization::LocalizedStringProvider::Initialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803ab160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(),
                    {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Localization::LocalizedStringProvider.TryLoadLocalizedStringData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Localization::LocalizedStringProvider::*)()>(&::Rewired::Localization::LocalizedStringProvider::TryLoadLocalizedStringData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803ab1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(),
                    {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Localization::LocalizedStringProvider.TryGetLocalizedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Localization::LocalizedStringProvider::*)(::StringW, ::by_ref<::StringW>)>(&::Rewired::Localization::LocalizedStringProvider::TryGetLocalizedString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ab190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(),
                    {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Localization::LocalizedStringProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Localization::LocalizedStringProvider::*)()>(&::Rewired::Localization::LocalizedStringProvider::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ab280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TextAsset>& Rewired::Localization::LocalizedStringProvider::__cordl_internal_get__localizedStringsFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localizedStringsFile;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& Rewired::Localization::LocalizedStringProvider::__cordl_internal_get__localizedStringsFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localizedStringsFile;
}
constexpr void Rewired::Localization::LocalizedStringProvider::__cordl_internal_set__localizedStringsFile(::UnityW<::UnityEngine::TextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localizedStringsFile = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Rewired::Localization::LocalizedStringProvider::__cordl_internal_get__dictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Rewired::Localization::LocalizedStringProvider::__cordl_internal_get__dictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dictionary;
}
constexpr void Rewired::Localization::LocalizedStringProvider::__cordl_internal_set__dictionary(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dictionary = value;
}
constexpr bool& Rewired::Localization::LocalizedStringProvider::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& Rewired::Localization::LocalizedStringProvider::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void Rewired::Localization::LocalizedStringProvider::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Rewired::Localization::LocalizedStringProvider::get_dictionary()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline void Rewired::Localization::LocalizedStringProvider::set_dictionary(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::TextAsset> Rewired::Localization::LocalizedStringProvider::get_localizedStringsFile()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(this, ___internal_method);
}
inline void Rewired::Localization::LocalizedStringProvider::set_localizedStringsFile(::UnityEngine::TextAsset*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Localization::LocalizedStringProvider::get_initialized()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Localization::LocalizedStringProvider::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Localization::LocalizedStringProvider::TryLoadLocalizedStringData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Localization::LocalizedStringProvider::TryGetLocalizedString(::StringW  key, ::by_ref<::StringW>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, result);
}
inline void Rewired::Localization::LocalizedStringProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Localization::LocalizedStringProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Localization::LocalizedStringProvider* Rewired::Localization::LocalizedStringProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Localization::LocalizedStringProvider*>());
}
// Ctor Parameters []
constexpr ::Rewired::Localization::LocalizedStringProvider::LocalizedStringProvider()   {
}
