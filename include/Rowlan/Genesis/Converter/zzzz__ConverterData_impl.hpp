#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Converter/ConverterData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Rowlan/Genesis/Converter/zzzz__ConverterData_def.hpp"
#include "Rowlan/Genesis/Converter/zzzz__ConverterData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::Genesis::Converter::ConverterData_Module::ConverterData_Module(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Converter::ConverterData_Module::ConverterData_Module()   {
}
constexpr ::Rowlan::Genesis::Converter::ConverterData_Module  Rowlan::Genesis::Converter::ConverterData_Module::Terrain{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::Genesis::Converter::ConverterData_Module  Rowlan::Genesis::Converter::ConverterData_Module::Heightmap{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::*)()>(&::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abeab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::__cordl_internal_get_inputPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputPath;
}
constexpr ::StringW const& Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::__cordl_internal_get_inputPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputPath;
}
constexpr void Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::__cordl_internal_set_inputPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputPath = value;
}
constexpr ::StringW& Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::__cordl_internal_get_outputPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputPath;
}
constexpr ::StringW const& Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::__cordl_internal_get_outputPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputPath;
}
constexpr void Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::__cordl_internal_set_outputPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputPath = value;
}
constexpr ::StringW& Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::__cordl_internal_get_collectionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionName;
}
constexpr ::StringW const& Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::__cordl_internal_get_collectionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionName;
}
constexpr void Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::__cordl_internal_set_collectionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectionName = value;
}
inline void Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings* Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings::ConverterData_HeightmapSettings()   {
}
//  Writing Method size for method: ::Rowlan::Genesis::Converter::ConverterData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Converter::ConverterData::*)()>(&::Rowlan::Genesis::Converter::ConverterData::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abd2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Converter::ConverterData*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::Genesis::Converter::ConverterData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::Converter::ConverterData::*)()>(&::Rowlan::Genesis::Converter::ConverterData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abd350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Converter::ConverterData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rowlan::Genesis::Converter::ConverterData::__cordl_internal_get_helpBoxVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr bool const& Rowlan::Genesis::Converter::ConverterData::__cordl_internal_get_helpBoxVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___helpBoxVisible;
}
constexpr void Rowlan::Genesis::Converter::ConverterData::__cordl_internal_set_helpBoxVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___helpBoxVisible = value;
}
constexpr ::Rowlan::Genesis::Converter::ConverterData_Module& Rowlan::Genesis::Converter::ConverterData::__cordl_internal_get__cordl_module()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_module;
}
constexpr ::Rowlan::Genesis::Converter::ConverterData_Module const& Rowlan::Genesis::Converter::ConverterData::__cordl_internal_get__cordl_module() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_module;
}
constexpr void Rowlan::Genesis::Converter::ConverterData::__cordl_internal_set__cordl_module(::Rowlan::Genesis::Converter::ConverterData_Module  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cordl_module = value;
}
constexpr ::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings*& Rowlan::Genesis::Converter::ConverterData::__cordl_internal_get_heightmapSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightmapSettings;
}
constexpr ::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings* const& Rowlan::Genesis::Converter::ConverterData::__cordl_internal_get_heightmapSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightmapSettings;
}
constexpr void Rowlan::Genesis::Converter::ConverterData::__cordl_internal_set_heightmapSettings(::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightmapSettings = value;
}
inline void Rowlan::Genesis::Converter::ConverterData::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Converter::ConverterData*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::Genesis::Converter::ConverterData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::Converter::ConverterData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::Converter::ConverterData* Rowlan::Genesis::Converter::ConverterData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::Converter::ConverterData*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Converter::ConverterData::ConverterData()   {
}
