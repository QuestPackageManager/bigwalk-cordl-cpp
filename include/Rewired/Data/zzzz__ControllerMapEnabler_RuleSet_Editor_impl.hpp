#pragma once
// IWYU pragma private; include "Rewired/Data/ControllerMapEnabler_RuleSet_Editor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/zzzz__ControllerMapEnabler_RuleSet_Editor_def.hpp"
#include "Rewired/Data/zzzz__ControllerMapEnabler_Rule_Editor_def.hpp"
#include "Rewired/zzzz__ControllerMapEnabler_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::get_id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor.set_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::*)(int32_t)>(&::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::set_id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"set_id", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::get_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor.set_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::*)(::StringW)>(&::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::set_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor.get_tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::get_tag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"get_tag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor.set_tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::*)(::StringW)>(&::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::set_tag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"set_tag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor.get_rules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>* (::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::get_rules)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"get_rules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor.set_rules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::*)(::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>*)>(&::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::set_rules)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"set_rules", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818a13e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::*)(::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*)>(&::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818a1360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor* (::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::Clone)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818a11e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor.ToRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerMapEnabler_RuleSet* (::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::*)()>(&::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::ToRuntime)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818a1270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"ToRuntime", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::ControllerMapEnabler_RuleSet_Editor::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr int32_t const& Rewired::Data::ControllerMapEnabler_RuleSet_Editor::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void Rewired::Data::ControllerMapEnabler_RuleSet_Editor::__cordl_internal_set__id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id = value;
}
constexpr ::StringW& Rewired::Data::ControllerMapEnabler_RuleSet_Editor::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Rewired::Data::ControllerMapEnabler_RuleSet_Editor::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Rewired::Data::ControllerMapEnabler_RuleSet_Editor::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::StringW& Rewired::Data::ControllerMapEnabler_RuleSet_Editor::__cordl_internal_get__tag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tag;
}
constexpr ::StringW const& Rewired::Data::ControllerMapEnabler_RuleSet_Editor::__cordl_internal_get__tag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tag;
}
constexpr void Rewired::Data::ControllerMapEnabler_RuleSet_Editor::__cordl_internal_set__tag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tag = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>*& Rewired::Data::ControllerMapEnabler_RuleSet_Editor::__cordl_internal_get__rules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rules;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>* const& Rewired::Data::ControllerMapEnabler_RuleSet_Editor::__cordl_internal_get__rules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rules;
}
constexpr void Rewired::Data::ControllerMapEnabler_RuleSet_Editor::__cordl_internal_set__rules(::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rules = value;
}
inline int32_t Rewired::Data::ControllerMapEnabler_RuleSet_Editor::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapEnabler_RuleSet_Editor::set_id(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"set_id", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::ControllerMapEnabler_RuleSet_Editor::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapEnabler_RuleSet_Editor::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Rewired::Data::ControllerMapEnabler_RuleSet_Editor::get_tag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"get_tag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapEnabler_RuleSet_Editor::set_tag(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"set_tag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>* Rewired::Data::ControllerMapEnabler_RuleSet_Editor::get_rules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"get_rules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>*>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapEnabler_RuleSet_Editor::set_rules(::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"set_rules", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::Data::ControllerMapEnabler_Rule_Editor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Data::ControllerMapEnabler_RuleSet_Editor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::ControllerMapEnabler_RuleSet_Editor::_ctor(::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor* Rewired::Data::ControllerMapEnabler_RuleSet_Editor::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(this, ___internal_method);
}
inline ::Rewired::ControllerMapEnabler_RuleSet* Rewired::Data::ControllerMapEnabler_RuleSet_Editor::ToRuntime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(),
                        {"ToRuntime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerMapEnabler_RuleSet*>(this, ___internal_method);
}
inline ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor* Rewired::Data::ControllerMapEnabler_RuleSet_Editor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>());
}
inline ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor* Rewired::Data::ControllerMapEnabler_RuleSet_Editor::New_ctor(::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ControllerMapEnabler_RuleSet_Editor*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::Data::ControllerMapEnabler_RuleSet_Editor::ControllerMapEnabler_RuleSet_Editor()   {
}
