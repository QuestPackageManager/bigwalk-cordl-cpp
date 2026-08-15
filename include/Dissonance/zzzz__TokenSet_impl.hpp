#pragma once
// IWYU pragma private; include "Dissonance/TokenSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__TokenSet_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Dissonance::TokenSet.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::TokenSet::*)()>(&::Dissonance::TokenSet::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f4180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TokenSet.add_TokenRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::TokenSet::*)(::System::Action_1<::StringW>*)>(&::Dissonance::TokenSet::add_TokenRemoved)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d1f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"add_TokenRemoved", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TokenSet.remove_TokenRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::TokenSet::*)(::System::Action_1<::StringW>*)>(&::Dissonance::TokenSet::remove_TokenRemoved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805d2050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"remove_TokenRemoved", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TokenSet.add_TokenAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::TokenSet::*)(::System::Action_1<::StringW>*)>(&::Dissonance::TokenSet::add_TokenAdded)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d1ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"add_TokenAdded", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TokenSet.remove_TokenAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::TokenSet::*)(::System::Action_1<::StringW>*)>(&::Dissonance::TokenSet::remove_TokenAdded)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d1fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"remove_TokenAdded", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TokenSet.Find
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::TokenSet::*)(::StringW)>(&::Dissonance::TokenSet::Find)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805d1a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"Find", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TokenSet.ContainsToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::TokenSet::*)(::StringW)>(&::Dissonance::TokenSet::ContainsToken)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805d1a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"ContainsToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TokenSet.AddToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::TokenSet::*)(::StringW)>(&::Dissonance::TokenSet::AddToken)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805d1910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"AddToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TokenSet.RemoveToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::TokenSet::*)(::StringW)>(&::Dissonance::TokenSet::RemoveToken)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805d1d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"RemoveToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TokenSet.IntersectsWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::TokenSet::*)(::Dissonance::TokenSet*)>(&::Dissonance::TokenSet::IntersectsWith)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1805d1b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"IntersectsWith", {}, {::i2c::type_of<::Dissonance::TokenSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TokenSet.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>* (::Dissonance::TokenSet::*)()>(&::Dissonance::TokenSet::GetEnumerator)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d1af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TokenSet.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Dissonance::TokenSet::*)()>(&::Dissonance::TokenSet::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d1af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TokenSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::TokenSet::*)()>(&::Dissonance::TokenSet::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d1e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& Dissonance::TokenSet::__cordl_internal_get__tokens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokens;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Dissonance::TokenSet::__cordl_internal_get__tokens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tokens;
}
constexpr void Dissonance::TokenSet::__cordl_internal_set__tokens(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tokens = value;
}
constexpr ::System::Action_1<::StringW>*& Dissonance::TokenSet::__cordl_internal_get_TokenRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TokenRemoved;
}
constexpr ::System::Action_1<::StringW>* const& Dissonance::TokenSet::__cordl_internal_get_TokenRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TokenRemoved;
}
constexpr void Dissonance::TokenSet::__cordl_internal_set_TokenRemoved(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TokenRemoved = value;
}
constexpr ::System::Action_1<::StringW>*& Dissonance::TokenSet::__cordl_internal_get_TokenAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TokenAdded;
}
constexpr ::System::Action_1<::StringW>* const& Dissonance::TokenSet::__cordl_internal_get_TokenAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TokenAdded;
}
constexpr void Dissonance::TokenSet::__cordl_internal_set_TokenAdded(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TokenAdded = value;
}
inline void Dissonance::TokenSet::setStaticF_SortOrder(::System::Collections::Generic::IComparer_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IComparer_1<::StringW>*, "SortOrder", ::Dissonance::TokenSet*>(std::forward<::System::Collections::Generic::IComparer_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IComparer_1<::StringW>* Dissonance::TokenSet::getStaticF_SortOrder()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IComparer_1<::StringW>*, "SortOrder", ::Dissonance::TokenSet*>();
}
inline int32_t Dissonance::TokenSet::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Dissonance::TokenSet::add_TokenRemoved(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"add_TokenRemoved", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::TokenSet::remove_TokenRemoved(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"remove_TokenRemoved", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::TokenSet::add_TokenAdded(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"add_TokenAdded", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::TokenSet::remove_TokenAdded(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"remove_TokenAdded", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Dissonance::TokenSet::Find(::StringW  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"Find", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline bool Dissonance::TokenSet::ContainsToken(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"ContainsToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
inline bool Dissonance::TokenSet::AddToken(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"AddToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
inline bool Dissonance::TokenSet::RemoveToken(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"RemoveToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token);
}
inline bool Dissonance::TokenSet::IntersectsWith(::Dissonance::TokenSet*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"IntersectsWith", {}, {::i2c::type_of<::Dissonance::TokenSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::System::Collections::Generic::IEnumerator_1<::StringW>* Dissonance::TokenSet::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Dissonance::TokenSet::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Dissonance::TokenSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TokenSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::TokenSet* Dissonance::TokenSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::TokenSet*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr  Dissonance::TokenSet::operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* Dissonance::TokenSet::i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Dissonance::TokenSet::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Dissonance::TokenSet::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::TokenSet::TokenSet()   {
}
