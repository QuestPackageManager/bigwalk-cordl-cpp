#pragma once
// IWYU pragma private; include "Dissonance/RoomName.hpp"
#include "Dissonance/zzzz__RoomName_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::RoomName.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::RoomName::*)()>(&::Dissonance::RoomName::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomName.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomName::*)(::StringW)>(&::Dissonance::RoomName::set_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomName.get_SuppressDuplicateCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::RoomName::*)()>(&::Dissonance::RoomName::get_SuppressDuplicateCheck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bd9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"get_SuppressDuplicateCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomName.set_SuppressDuplicateCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomName::*)(bool)>(&::Dissonance::RoomName::set_SuppressDuplicateCheck)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"set_SuppressDuplicateCheck", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomName::*)(::StringW, bool)>(&::Dissonance::RoomName::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cfd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomName::*)(::StringW)>(&::Dissonance::RoomName::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cfd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomName.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::RoomName::*)(::Dissonance::RoomName)>(&::Dissonance::RoomName::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cfd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::RoomName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomName.op_Implicit___Dissonance__RoomName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::RoomName (*)(::StringW)>(&::Dissonance::RoomName::op_Implicit___Dissonance__RoomName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805cfdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomName.op_Implicit___StringW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Dissonance::RoomName)>(&::Dissonance::RoomName::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Dissonance::RoomName>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Dissonance::RoomName::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Dissonance::RoomName::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Dissonance::RoomName::get_SuppressDuplicateCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"get_SuppressDuplicateCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Dissonance::RoomName::set_SuppressDuplicateCheck(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"set_SuppressDuplicateCheck", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Dissonance::RoomName::_ctor(::StringW  name, bool  suppress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, suppress);
}
inline void Dissonance::RoomName::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline bool Dissonance::RoomName::Equals(::Dissonance::RoomName  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::RoomName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::Dissonance::RoomName Dissonance::RoomName::op_Implicit___Dissonance__RoomName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::RoomName>(nullptr, ___internal_method, name);
}
inline ::StringW Dissonance::RoomName::op_Implicit___StringW(::Dissonance::RoomName  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomName>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Dissonance::RoomName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::RoomName>"
constexpr  Dissonance::RoomName::operator ::System::IEquatable_1<::Dissonance::RoomName>*()  {
return static_cast<::System::IEquatable_1<::Dissonance::RoomName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Dissonance::RoomName>"
constexpr ::System::IEquatable_1<::Dissonance::RoomName>* Dissonance::RoomName::i___System__IEquatable_1___Dissonance__RoomName_()  {
return static_cast<::System::IEquatable_1<::Dissonance::RoomName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Name_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SuppressDuplicateCheck_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::RoomName::RoomName(::StringW  _Name_k__BackingField, bool  _SuppressDuplicateCheck_k__BackingField) noexcept  {
this->_Name_k__BackingField = _Name_k__BackingField;
this->_SuppressDuplicateCheck_k__BackingField = _SuppressDuplicateCheck_k__BackingField;
}
// Ctor Parameters []
constexpr ::Dissonance::RoomName::RoomName()   {
}
