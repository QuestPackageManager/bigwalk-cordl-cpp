#pragma once
// IWYU pragma private; include "System/Xml/ReadContentAsBinaryHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_def.hpp"
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::ReadContentAsBinaryHelper_State::ReadContentAsBinaryHelper_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::ReadContentAsBinaryHelper_State::ReadContentAsBinaryHelper_State()   {
}
constexpr ::System::Xml::ReadContentAsBinaryHelper_State  System::Xml::ReadContentAsBinaryHelper_State::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::ReadContentAsBinaryHelper_State  System::Xml::ReadContentAsBinaryHelper_State::InReadContent{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::ReadContentAsBinaryHelper_State  System::Xml::ReadContentAsBinaryHelper_State::InReadElementContent{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.Finish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::Finish)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181cdbbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                        {"Finish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181cdbef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.MoveToNextContentNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::ReadContentAsBinaryHelper::*)(bool)>(&::System::Xml::ReadContentAsBinaryHelper::MoveToNextContentNode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181cdbdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                        {"MoveToNextContentNode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlReader*& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_reader(::System::Xml::XmlReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reader = value;
}
constexpr ::System::Xml::ReadContentAsBinaryHelper_State& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::System::Xml::ReadContentAsBinaryHelper_State const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_state(::System::Xml::ReadContentAsBinaryHelper_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr int32_t& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_valueOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueOffset;
}
constexpr int32_t const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_valueOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueOffset;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_valueOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valueOffset = value;
}
constexpr bool& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_isEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEnd;
}
constexpr bool const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_isEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEnd;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_isEnd(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEnd = value;
}
inline void System::Xml::ReadContentAsBinaryHelper::Finish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                        {"Finish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::ReadContentAsBinaryHelper::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::ReadContentAsBinaryHelper::MoveToNextContentNode(bool  moveIfOnContentNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Xml::ReadContentAsBinaryHelper*>(),
                        {"MoveToNextContentNode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, moveIfOnContentNode);
}
// Ctor Parameters []
constexpr ::System::Xml::ReadContentAsBinaryHelper::ReadContentAsBinaryHelper()   {
}
