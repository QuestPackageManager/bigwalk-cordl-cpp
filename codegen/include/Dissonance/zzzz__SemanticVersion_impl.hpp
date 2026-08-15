#pragma once
// IWYU pragma private; include "Dissonance/SemanticVersion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__SemanticVersion_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Dissonance::SemanticVersion.get_Major
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::SemanticVersion::*)()>(&::Dissonance::SemanticVersion::get_Major)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {"get_Major", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::SemanticVersion.get_Minor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::SemanticVersion::*)()>(&::Dissonance::SemanticVersion::get_Minor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {"get_Minor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::SemanticVersion.get_Patch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::SemanticVersion::*)()>(&::Dissonance::SemanticVersion::get_Patch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {"get_Patch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::SemanticVersion.get_Tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::SemanticVersion::*)()>(&::Dissonance::SemanticVersion::get_Tag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {"get_Tag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::SemanticVersion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::SemanticVersion::*)()>(&::Dissonance::SemanticVersion::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::SemanticVersion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::SemanticVersion::*)(int32_t, int32_t, int32_t, ::StringW)>(&::Dissonance::SemanticVersion::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d1100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::SemanticVersion.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::SemanticVersion::*)(::Dissonance::SemanticVersion*)>(&::Dissonance::SemanticVersion::CompareTo)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805d0a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {"CompareTo", {}, {::i2c::type_of<::Dissonance::SemanticVersion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::SemanticVersion.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::SemanticVersion::*)()>(&::Dissonance::SemanticVersion::ToString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1805d0fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                    {::i2c::class_of<::Dissonance::SemanticVersion*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::SemanticVersion.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::SemanticVersion::*)(::Dissonance::SemanticVersion*)>(&::Dissonance::SemanticVersion::Equals)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805d0db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::SemanticVersion*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::SemanticVersion.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::SemanticVersion::*)(::System::Object*)>(&::Dissonance::SemanticVersion::Equals)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1805d0bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                    {::i2c::class_of<::Dissonance::SemanticVersion*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::SemanticVersion.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::SemanticVersion::*)()>(&::Dissonance::SemanticVersion::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805d0f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                    {::i2c::class_of<::Dissonance::SemanticVersion*>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Dissonance::SemanticVersion::__cordl_internal_get__major()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____major;
}
constexpr int32_t const& Dissonance::SemanticVersion::__cordl_internal_get__major() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____major;
}
constexpr void Dissonance::SemanticVersion::__cordl_internal_set__major(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____major = value;
}
constexpr int32_t& Dissonance::SemanticVersion::__cordl_internal_get__minor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minor;
}
constexpr int32_t const& Dissonance::SemanticVersion::__cordl_internal_get__minor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minor;
}
constexpr void Dissonance::SemanticVersion::__cordl_internal_set__minor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minor = value;
}
constexpr int32_t& Dissonance::SemanticVersion::__cordl_internal_get__patch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patch;
}
constexpr int32_t const& Dissonance::SemanticVersion::__cordl_internal_get__patch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____patch;
}
constexpr void Dissonance::SemanticVersion::__cordl_internal_set__patch(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____patch = value;
}
constexpr ::StringW& Dissonance::SemanticVersion::__cordl_internal_get__tag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tag;
}
constexpr ::StringW const& Dissonance::SemanticVersion::__cordl_internal_get__tag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tag;
}
constexpr void Dissonance::SemanticVersion::__cordl_internal_set__tag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tag = value;
}
inline int32_t Dissonance::SemanticVersion::get_Major()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {"get_Major", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Dissonance::SemanticVersion::get_Minor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {"get_Minor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Dissonance::SemanticVersion::get_Patch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {"get_Patch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Dissonance::SemanticVersion::get_Tag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {"get_Tag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Dissonance::SemanticVersion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::SemanticVersion::_ctor(int32_t  major, int32_t  minor, int32_t  patch, ::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, major, minor, patch, tag);
}
inline int32_t Dissonance::SemanticVersion::CompareTo(::Dissonance::SemanticVersion*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {"CompareTo", {}, {::i2c::type_of<::Dissonance::SemanticVersion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline ::StringW Dissonance::SemanticVersion::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::SemanticVersion*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Dissonance::SemanticVersion::Equals(::Dissonance::SemanticVersion*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::SemanticVersion*>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::SemanticVersion*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool Dissonance::SemanticVersion::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::SemanticVersion*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Dissonance::SemanticVersion::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::SemanticVersion*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Dissonance::SemanticVersion* Dissonance::SemanticVersion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::SemanticVersion*>());
}
inline ::Dissonance::SemanticVersion* Dissonance::SemanticVersion::New_ctor(int32_t  major, int32_t  minor, int32_t  patch, ::StringW  tag)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::SemanticVersion*>(major, minor, patch, tag));
}
/// @brief Convert operator to "::System::IComparable_1<::Dissonance::SemanticVersion*>"
constexpr  Dissonance::SemanticVersion::operator ::System::IComparable_1<::Dissonance::SemanticVersion*>*() noexcept {
return static_cast<::System::IComparable_1<::Dissonance::SemanticVersion*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::Dissonance::SemanticVersion*>"
constexpr ::System::IComparable_1<::Dissonance::SemanticVersion*>* Dissonance::SemanticVersion::i___System__IComparable_1___Dissonance__SemanticVersion__() noexcept {
return static_cast<::System::IComparable_1<::Dissonance::SemanticVersion*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::SemanticVersion*>"
constexpr  Dissonance::SemanticVersion::operator ::System::IEquatable_1<::Dissonance::SemanticVersion*>*() noexcept {
return static_cast<::System::IEquatable_1<::Dissonance::SemanticVersion*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Dissonance::SemanticVersion*>"
constexpr ::System::IEquatable_1<::Dissonance::SemanticVersion*>* Dissonance::SemanticVersion::i___System__IEquatable_1___Dissonance__SemanticVersion__() noexcept {
return static_cast<::System::IEquatable_1<::Dissonance::SemanticVersion*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::SemanticVersion::SemanticVersion()   {
}
