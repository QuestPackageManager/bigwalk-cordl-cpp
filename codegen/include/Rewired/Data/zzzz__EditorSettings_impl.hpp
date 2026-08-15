#pragma once
// IWYU pragma private; include "Rewired/Data/EditorSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rewired/Data/zzzz__EditorSettings_def.hpp"
//  Writing Method size for method: ::Rewired::Data::EditorSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::EditorSettings::*)()>(&::Rewired::Data::EditorSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::EditorSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Data::EditorSettings::__cordl_internal_get_programVersion1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___programVersion1;
}
constexpr int32_t const& Rewired::Data::EditorSettings::__cordl_internal_get_programVersion1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___programVersion1;
}
constexpr void Rewired::Data::EditorSettings::__cordl_internal_set_programVersion1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___programVersion1 = value;
}
constexpr int32_t& Rewired::Data::EditorSettings::__cordl_internal_get_programVersion2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___programVersion2;
}
constexpr int32_t const& Rewired::Data::EditorSettings::__cordl_internal_get_programVersion2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___programVersion2;
}
constexpr void Rewired::Data::EditorSettings::__cordl_internal_set_programVersion2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___programVersion2 = value;
}
constexpr int32_t& Rewired::Data::EditorSettings::__cordl_internal_get_programVersion3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___programVersion3;
}
constexpr int32_t const& Rewired::Data::EditorSettings::__cordl_internal_get_programVersion3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___programVersion3;
}
constexpr void Rewired::Data::EditorSettings::__cordl_internal_set_programVersion3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___programVersion3 = value;
}
constexpr int32_t& Rewired::Data::EditorSettings::__cordl_internal_get_programVersion4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___programVersion4;
}
constexpr int32_t const& Rewired::Data::EditorSettings::__cordl_internal_get_programVersion4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___programVersion4;
}
constexpr void Rewired::Data::EditorSettings::__cordl_internal_set_programVersion4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___programVersion4 = value;
}
constexpr int32_t& Rewired::Data::EditorSettings::__cordl_internal_get_dataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataVersion;
}
constexpr int32_t const& Rewired::Data::EditorSettings::__cordl_internal_get_dataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataVersion;
}
constexpr void Rewired::Data::EditorSettings::__cordl_internal_set_dataVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dataVersion = value;
}
inline void Rewired::Data::EditorSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::EditorSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::EditorSettings* Rewired::Data::EditorSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::EditorSettings*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::EditorSettings::EditorSettings()   {
}
